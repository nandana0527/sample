#include<iostream>
using namespace std;
int main()
{
    int i,n,j,s;
    cout<<"enter the value";
    cin>>n;
    for(i=0;i<n;i++)
    {
       for(s=0;s<n-i-1;s++) 
       {
        cout<<"  ";
       }
            for(j=1;j<i;j++)
            {
                cout<<"* ";
            }cout<<"\n";
            
        }
    }
