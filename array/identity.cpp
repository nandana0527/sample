#include<iostream>
using namespace std;
bool isidentitymatrix(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j&&arr[i][j]!=1||i!=j&&arr[i][j]!=0)
            {
                return false;
            }
        }
    }return true;
}
int main()
{
    int arr[3][3]={{1,0,0},
                   {0,1,0},
                   {0,0,1}};
    
            if(isidentitymatrix(arr))
            {
                cout<<"is identity matrix";
            }
            else
            {
                cout<<"is not an identity matrix";
            }
                      
}