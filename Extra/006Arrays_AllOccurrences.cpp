#include<iostream>
using namespace std;
int main(){
    // int arr[100]; //declaration of array of size 100
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // for (int i = 0; i <=n-1; i++)
    // {
    //     cin>>arr[i];
    // }
    int arr[] = {10,20,30,10,20};
    int n = sizeof(arr)/sizeof(int);
    // int t;
    // cout<<"Enter the value to be searched: ";
    // cin>>t;
    int t = 20;
    int i;
    bool flag = false;//assume that  the target element in the array is not present
    // int cnt = 0;
    for (i = 0; i <=n-1; i++)
    {
        if(arr[i]== t){
            cout<<i<<" ";
            // flag = true;
            // cnt++;
        }
    }
    if(flag==false){
        cout<<-1;
    }


    
    return 0;
}