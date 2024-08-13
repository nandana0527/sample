#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"enter the value";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}