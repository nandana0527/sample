#include<iostream>
using namespace std;
void multiplymatrices(int a[3][3],int b[3][3],int result[3][3])
{
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[i][j]=a[i][j]*b[i][j];
        }  
    }
}
int main()
{
    int a[3][3],b[3][3],result[3][3];
    cout<<"enter the element in array a";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the element in array b";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
        
    }
   multiplymatrices(a,b,result);
   cout<<"the result is "<<"\n";
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        cout<<result[i][j]<<"  ";
    }cout<<endl;
   }

}