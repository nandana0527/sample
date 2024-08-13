#include<iostream>
using namespace std;
void rowaverages(int arr[3][3],double avg[3])
{
for(int i=0;i<3;i++)
{
   int sum=0;
    for(int j=0;j<3;j++)
    {
        sum=sum+arr[i][j];
    }
    avg[i]=sum/3;
}
}
void avg(double avg[3])
{
    for(int i=0;i<3;i++)
    {
        cout<<"average of row"<<avg[i]<<"\n";
    }
}
int main()
{
    int i,j,arr[3][3];
    cout<<"enter the values in the array";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    double avg[3];
    rowaverages(arr,avg);
    for(i=0;i<3;i++)
    {
    cout<<avg[i];
    }
    return 0;
}