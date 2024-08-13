#include<iostream>
using namespace std;
int main()
{
    int n=5,j,i;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            cout<<"*";
        }cout<<"\n";
    }
}