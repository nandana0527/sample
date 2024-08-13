#include<iostream>
using namespace std;
int main()
{
    int min,i,temp,a[10];
    cout<<"enter the values to elements";
    for(i=0;i<10;i++)
    {
        cin>>a[10];
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i+1]=a[i];
            a[i]=temp;
        }
        min=a[0];
        
    }cout<<min;

}