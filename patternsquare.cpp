#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the limit";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0||j==n-1||i==0||i==n-1)
            {
            cout<<"*"<<"\t";
            }
            else{
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
    
}