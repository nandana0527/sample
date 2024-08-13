#include<iostream>
using namespace std;
int main()
{
    int i,n=4,j;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }cout<<"\n";
    }

}