#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,0,3,0,2,0,5,0,7,8,2};
    int n = sizeof(arr)/sizeof(int);
    int i = 0;
    while (i<n)
    {
        if(arr[i]==0){
            //shift all elements to left
            for (int j = i; j < n-1; j++)
            {
                arr[j] = arr[j+1];
            }
            arr[n-1] = 0;
            n--; //reduce the size of array as last is zero
        }
        else{
            i++;
        }
    }
    for (int i = 0; i< sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}