#include<iostream>
using namespace std;
int main(){
    // Declare an array of 5 integers
    int arr[5];
    cout<<"Size of array is: "<<sizeof(arr)<<endl;
    //by default garbage values are stored in array
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;

    return 0;
}