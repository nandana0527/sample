#include<iostream>
using namespace std;
int main()
{
    int i,a[10],sum=0;
    cout<<"enter the elements ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
        
    }cout<<"the sum is"<<sum;



}