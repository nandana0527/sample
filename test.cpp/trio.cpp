#include<iostream>
using namespace std;
int main()
{
    int n=5,j,s,i;
    for(i=0;i<n;i++)
    {
        for(s=0;s<n-i-1;s++)
        {
            cout<<" ";
        }
        for(j=1;j<=i+1;j++)
        {
            cout<<"*";
        }cout<<"\n";
    }
}