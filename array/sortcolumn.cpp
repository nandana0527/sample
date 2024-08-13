#include<iostream>
using namespace std;
void sortcolumns(int arr[3][3])
{
    int temp;
    for(int col=0;col<3;col++)
    {
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(arr[i][j]>arr[i][j+1])
            {
                temp=arr[i][j];
                arr[i][j]=arr[i][j+1];
                arr[i][j+1]=temp;
                            }

        }
    }
    }
    cout<<"sorted matrix=";
    cout<<endl;
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
    int arr[3][3];
    cout<<"enter the elements ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }

    }
    cout<<"original matrix:"<<"\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }cout<<"\n";
    }
    sortcolumns(arr);
    return 0;


}