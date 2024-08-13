#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"enter the side";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

}