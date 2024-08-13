#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,sum=0;
    cout<<"enter the values";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }cout<<"\n";

    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }cout<<sum;
        cout<<"\n";

    }


}