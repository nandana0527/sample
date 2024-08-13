#include<iostream>
using namespace std;
int main()
{
    int i,n=3,j,l,s;
    for(i=-n;i<=n;i++)
    {
        if(i<0)
        {
            l=-i;
        }
        else{
            l=i;
        }
        for(s=0;s<l;s++)
        {
            cout<<"  ";
        }
        for(j=1;j<=2*n-2*l+1;j++)
        {
            cout<<"* ";
        }cout<<"\n";
    }
}