#include<iostream>
using namespace std;
int main()
{
    int i,n=7,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(j==n-i+1||j==n+i-1||i==n)
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