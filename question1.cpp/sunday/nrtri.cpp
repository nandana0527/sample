#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j,num=1;
    
    for(i=1;i<=n;i++)
    {
        num=1;
      for(j=1;j<=n;j++)
      {
        
        if(j>=n-i+1)
        {
        
        cout<<num<<" ";
        num++;
        }
        else{
            cout<<" ";
        }
      }cout<<"\n";
    }
}