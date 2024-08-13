#include <iostream>
using namespace std;
int sumlowertriangular(int arr[3][3]){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
              if(i>j){
                sum=sum+arr[i][j];
              }
        }
    }return sum;
}
int main()
{
    int i,j,arr[3][3],values;
    cout<<"enter the values:";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
            }
        }values=sumlowertriangular(arr);
        cout<<values;
    }
    
