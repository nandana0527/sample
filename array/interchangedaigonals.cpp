#include<iostream>
using namespace std;
void interchangedaigonals(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        swap(arr[i][i],arr[i][2-i]);
    }
}
void printmatrix(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }cout<<"\n";
    }
}
int main()
{
    int arr[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}}; 
    cout<<"original matrix is"<<"\n";
    printmatrix(arr);
    interchangedaigonals(arr);
    cout<<"matrix after interchange"<<"\n";
    printmatrix(arr);
    return 0;
}