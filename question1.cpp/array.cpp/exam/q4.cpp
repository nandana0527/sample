#include<iostream>
using namespace std;
bool issymmetric(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                return false;
            }
        }
    }return true;
}
int main()
{
    int i,j,arr[3][3];
    cout<<"enter the elements";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    } if(issymmetric(arr))
    {
        cout<<"it is a symmetric";
    }
    else{
         cout<<"its not a symmetric";
    }
       
}