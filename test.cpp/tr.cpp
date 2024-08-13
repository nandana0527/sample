#include<iostream>
using namespace std;
int main()
{
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }cout<<"\n";
    }
}