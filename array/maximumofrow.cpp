#include<iostream>
using namespace std;
int main()
{
    int i,max,a[10],temp;
    cout<<"enter the 10 elements to find the maximum ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
    if(a[i]>a[i+1])
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }max=a[9];
    
    }cout<<max;

}