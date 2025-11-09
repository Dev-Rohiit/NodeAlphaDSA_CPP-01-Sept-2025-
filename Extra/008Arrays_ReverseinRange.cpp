#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int);

    // int i;
    // cout<<"Enter the value of i";
    // cin>>i;
    int i = 2;

    // int j;
    // cout<<"Enter the value of j";
    // cin>>j;
    int j = 5;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}