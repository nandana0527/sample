#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2-1;j++)
        {
            if(i==n||j==n-i+1||j==n+i-1)
            {
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }cout<<'\n';
    }
}
