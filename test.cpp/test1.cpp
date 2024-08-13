#include<iostream>
using namespace std;
int main()
{
    int i,n,j,s;
    cout<<"enter the value of n";
    cin>>n;
    s=1;
    for(i=1;i<n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            cout<<s;
            s++;
        }
        
        cout<<"\n";

    }
}