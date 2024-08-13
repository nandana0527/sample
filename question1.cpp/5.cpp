#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j,s=1;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            cout<<s++;
        }cout<<"\n";
    }
}