#include<iostream>
using namespace std;
int main()
{
    int i,n=4,j,l,s;
    for(i=-n;i<=n;i++)
    {
        if(i<0)
        {
            l=-i;
        }
        else
        {
            l=i;
        }
        for(s=0;s<n-l;s++)
        {
            cout<<"  ";
        }
        for(j=0;j<2*l+1;j++)
        {
            cout<<" *";
        }cout<<"\n";
    }
}