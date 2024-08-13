#include<iostream>
using namespace std;
int main()
{
    int i,n=7,j;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i+j==n-1)
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