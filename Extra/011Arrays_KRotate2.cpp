#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int);
    int k = 3; //number of rotations

    //1. reverse the array from [0 to n-1] -> n elements
    int i = 0;
    int j = n-1;
    while (i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    //2. reverse the array from [0 to k-1] -> k elements
    i = 0;
    j = k-1;
    while (i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    //3. reverse the array from [k to n-1] -> n-k elements
    i = k;
    j = n-1;
    while (i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    //print the array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   

}