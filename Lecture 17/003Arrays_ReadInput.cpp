#include<iostream>
using namespace std;
int main(){
    // int arr[100]; //declaration of array of size 100

    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;

    // // 1. read values into the array
    // for (int i = 0; i <n; i++)
    // {
    //     cin>>arr[i];
    // }
    // // 2. print the values in the array
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // // 3. print the values in the array in reverse order
    // for (int i = n-1; i >=0; i--)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;

    int B[] = {10,20,30,40,50};
    int m = sizeof(B)/sizeof(int);
    cout<<"Size of array B is: "<<m<<endl;
    for (int i = 0; i < m; i++)
    {
        cout<<B[i]<<" ";
    }
    
    
    
    return 0;

}