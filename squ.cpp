#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    n=5;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(j>n-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
}