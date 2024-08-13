#include<iostream>
using namespace std;
int main()
{
    int i,n=6,j;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i+1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }cout<<"\n";
    }

}