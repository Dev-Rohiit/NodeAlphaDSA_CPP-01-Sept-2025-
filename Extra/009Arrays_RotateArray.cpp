#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/ sizeof(int);
    int temp = arr[n-1];
    for (int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    // arr[0] = temp;

    //printing...
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;

}