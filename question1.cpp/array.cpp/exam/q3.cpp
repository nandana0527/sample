#include<iostream>
using namespace std;
void rowaverages(int arr[3][3], double avg[3])
{

for(int i=0;i<3;i++)
{
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum=sum+arr[j][i];
        avg[i]=sum/3;
    }
}for(int i=0;i<3;i++)
{
    cout<<avg[i]<<" ";
}
}

int main()
{
    int i,j,arr[3][3];
    double avg[3];
    cout<<"enter the elements in the array";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    rowaverages(arr, avg);
   
}