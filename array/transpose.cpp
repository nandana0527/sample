#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[3][3];
    cout<<"enter the elements";
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
           cout<<arr[j][i];
        }cout<<endl;
    }
    
}
