#include<iostream>
using namespace std;
int sumlowertriangular(int arr[3][3])
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j<i)
            {
              sum=sum+arr[i][j];  
            }
            
        }
    }return sum;
}
int main()
{
    int arr[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
   int sum=sumlowertriangular(arr);
   cout<<"sum of lower triangle =  "<<sum;
   return 0;

}