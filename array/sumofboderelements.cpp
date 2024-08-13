#include<iostream>
using namespace std;
int sumofborderelements(int arr[3][3])
{
    int sum=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(i==0||j==0||i==2||j==2)
        {
            sum=sum+arr[i][j];
        }
    }
}return sum;
}

int main()
{
    int arr[3][3];
    cout<<"enter the elements";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=sumofborderelements(arr);
    cout<<"sum of border elements= "<<sum;
    return 0;


}