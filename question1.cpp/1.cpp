#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5,x=1;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            cout<<x++<<" ";
        }cout<<"\n";
    }
}