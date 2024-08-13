//write a program with a function void interchange diagonals(int arr[3][3]) that interchanges the main diagonals and the secondary diagonal of a 3*3 matrix
// #include<iostream>
// using namespace std;
// void interchangediagonals(int arr[3][3])
// {
//     for(int i=0;i<3;i++)
//     {
//             swap(arr[i][i],arr[i][2-i]);
        
//     }
// }
//    void printmatrix(int arr[3][3]) 
//    {
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<arr[i][j];
//         }cout<<"\n";
//     }
//    }



// int main()
// {
//     int arr[3][3]={{1,2,3},
//                    {4,5,6},
//                    {7,8,9} };
//     cout<<"original matrix:"<<"\n";
//     printmatrix(arr);
    
//   interchangediagonals(arr);
//   cout<<"matrix after interchanging daigonals:"<<"\n";
//   printmatrix(arr);
//   return 0;
// }

    
//  #include<iostream>
//  using namespace std;
//  void interchangedaigonals(int arr[3][3])

//  {
//     for(int i=0;i<3;i++)
//     {
//         swap(arr[i][i],arr[i][2-i]);
//     }
//  }
//     void printmatrix(int arr[3][3])
//     {
//         for(int i=0;i<3;i++)
//         {
//             for(int j=0;j<3;j++)
//             {
//                 cout<<arr[i][j];
//             }cout<<"\n";
//         }
//     }
 
//  int main()
//  {
//     int arr[3][3]={{1,2,3},
//                    {4,5,6},
//                    {7,8,9}};
//     cout<<"original matrix:"<<"\n";
//     printmatrix(arr);
//     interchangedaigonals(arr);
//     cout<<"matrix after interchanging daigonals:"<<"\n";
//     printmatrix(arr);
//     return 0;              
//  } 
    



// #include<iostream>
// using namespace std;
// void interchangedaigonals(int arr[3][3])
// {
//     for(int i=0;i<3;i++)
//     {
//         swap(arr[i][i],arr[i][2-i]);
//     }
    
// }
// void printmatrix(int arr[3][3])
// {
// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//         cout<<arr[i][j];
//     }cout<<"\n";
// }
// }
// int main()
// {
//     int arr[3][3]={{3,2,1},
//                     {6,5,4},
//                     {9,8,7}};
//    cout<<"the original matrix="<<"\n";
//    printmatrix(arr); 
//    interchangedaigonals(arr);
//    cout<<"after interchanging daigonals:"<<"\n"; 
//    printmatrix(arr);
//    return 0;               
// }


//write a program with a function int sumlowertriangular(int arr[3][3])that calculates and returns the sum of the lower triangular elements of a 3*3 matrix

// #include<iostream>
// using namespace std;
// int sumlowertriangluar(int arr[3][3])
// {
//     int sum=0;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(j<i)
//             {
//                 sum=sum+arr[i][j];
//             }
//         }
//     }return sum;
// }
// int main()
// {
//     int arr[3][3]={{1,2,3},
//                     {4,5,6},
//                     {7,8,9}};
//     int sum=sumlowertriangluar(arr);
//     cout<<"sum of the lower triangle="<<sum;
//     return 0;                
// }

// 


//write a program with a function void rowaverages(int arr[3][3],double  avg[3]) that calculates and returns the average of each row in a 3*3 matrix.

// 
// #include<iostream>
// using namespace std;
// void rowaverages(int arr[3][3],double avg[3])
// {
//     for(int i=0;i<3;i++)
//     {
//         int sum=0;
//         for(int j=0;j<3;j++)
//         {
//             sum=sum+arr[i][j];
//         }avg[i]=sum/3;
//     }
// }
// void avg(double avg[3])
// {
//     for(int i=0;i<3;i++)
//     {
//         cout<<"average of row"<<avg[i]<<"\n";
//     }
// }
// int main()
// {
//     int arr[3][3];
//     cout<<"enter the elements ";
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     double avg[3];
//     rowaverages(arr,avg);
//     for(int i=0;i<3;i++)
//     {
//         cout<<avg[i];
//     }return 0;
// }

//write a program with function bool issymmetric(int arr[3][3])that checks if a 3*3 array is symmetric

#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=9;i>=0;i--)
    {
        cout<<arr[i]<< " ";
    }cout<<"\n";
    
}