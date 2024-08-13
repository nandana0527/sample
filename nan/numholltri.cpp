#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5,num=1;
    for(i=1;i<=n;i++)
    {num=1;
        for(j=1;j<=n*2-1;j++)
        {
            if(i==n||j==n-i+1||j==n+i-1)
            {
                cout<<num;
                num++;
            }
            else{
              if(num>1)  {
                num++;
              }
            cout<<" ";
            
            }
        }cout<<'\n';
    }
}
