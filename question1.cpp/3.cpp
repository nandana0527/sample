#include<iostream>
using namespace std;
int main()
{
    int i,j,n=8;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j==n-i+1||j==n+i-1||i==n)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }cout<<"\n";
    }
    

}