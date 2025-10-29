#include<iostream>
using namespace std;
int main(){
    int arr[] = {50,40,30,20,10};
    int n = sizeof(arr)/sizeof(int);
    // Bubble Sort
    for(int i = 1; i<=n-1; i++){
        bool flag = true; //array is already sorted
        //with the each pass we will place the largest element of the 
        //unsorted part of the array to its correct position
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = false; //array is not sorted
            }

        for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;

        }
        if(flag){
            break;
    }
}
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}