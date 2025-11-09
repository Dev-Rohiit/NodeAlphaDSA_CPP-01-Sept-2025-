#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/ sizeof(int);
    // int k = 3;
    // int j = 0;
    // while (j<k)
    // {
    //     int temp = arr[n-1];
    //     for (int i = n-1; i > 0; i--)
    //     {
    //         arr[i] = arr[i-1];
    //     }
    //     arr[0] = temp;
    //     j++;
        
    // }

    // int k = 3;
    // while (k>0)
    // {
    //     int temp = arr[n-1];
    //     for (int i = n-1; i > 0; i--)
    //     {
    //         arr[i] = arr[i-1];
    //     }
    //     arr[0] = temp;
    //     k--;
        
    // }

    int k = 3;
    while (k--)
    {
        int temp = arr[n-1];
        for (int i = n-1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
        
    }
    //printing...
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;

}