#include<iostream>
using namespace std;
int main()
{
    int i,n=6,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||i==1||j==n||i==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }cout<<"\n";
    }
}