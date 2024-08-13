#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n*2;j++)
        {
        if(j==n-i||n-1==i||j==n+i)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }

        
    }cout<<endl;
    }
}