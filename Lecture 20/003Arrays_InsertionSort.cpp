#include<iostream>
using namespace std;
int main(){
    int arr[] = {50,40,10,30,20};
    int n = sizeof(arr)/sizeof(int);
    //passes
    for(int i = 1; i<=n-1; i++){
        //in the ith pass, we have to insert the first elemrnt 
        //in the unsorted part of the array to its correct position
        //in the sorted part of the array
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]> key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    //print the sorted array
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}