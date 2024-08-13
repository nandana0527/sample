#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the limit";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=2*n;j++)
        {
            if(j==n+i||j==n-i||n==i)
            {
                cout<<(char)(64+i+1)<<"\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
}