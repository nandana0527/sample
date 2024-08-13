#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j;
  
    for(i=1;i<=n;i++)
    {char alphabet='A';
        
        for(j=1;j<=n;j++)
        {
            if(j>=n-i+1)
            {
                cout<<alphabet++<<" ";
            }
            else
            {
               cout<<" ";
            }
        }cout<<"\n";
    }
}