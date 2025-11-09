#include<iostream>
using namespace std;
int main(){
    int arr[] = {50,40,30,20,10};
    int n = sizeof(arr)/sizeof(int);
    //Selection Sort Algorithm
    for (int i = 0; i < n-1; i++)
    {
        int cor_Pos = i; //correct position of ith iteration
        int min_Index = i;
        for (int j = i+1 ; j <n ; j++)
        {
            if (arr[j]<arr[min_Index])
            {
                min_Index = j;
            }
        }
        swap(arr[cor_Pos], arr[min_Index]);
        
    }
    for (int i  = 0; i <= n-1; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}