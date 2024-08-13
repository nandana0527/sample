#include<iostream>
using namespace std;
int main()
{
    int i,n=5,j;
    
    for(i=5;i>=1;i--)
    {
        char alphabet='A';
        for(j=1;j<=i;j++)
        {
            cout<<alphabet++;
        }cout<<"\n";
    }
}