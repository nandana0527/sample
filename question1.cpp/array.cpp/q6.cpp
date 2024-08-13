#include<iostream>
using namespace std;
int main()
{
    int j,i,a[3][3];
    cout<<"enter";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cin>>a[i][j];
            }cout<<endl;
           
        }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           
            cout<<a[i][j];
        }cout<<endl;
    }
}   