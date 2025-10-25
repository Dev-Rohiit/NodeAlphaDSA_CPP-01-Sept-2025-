#include<iostream>
using namespace std;
int main(){
    int arr[100];

    int n = 5;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    //1. user read array
    for (int i = 0; i <=n-1; i++)
    {
        cin>>arr[i];
    }
    //2. print the array
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //3. print the array in reverse order
    for (int i = n-1; i >=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}