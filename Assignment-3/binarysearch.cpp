#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, 5, 6, 9, 78};
    int n = sizeof(arr)/sizeof(int);
    int t = 6;
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    while(s<=e){
        if(arr[mid] == t){
            cout<<mid<<endl;
            break;
        }
        else{
            if(t>arr[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    if(s>e){
        cout<<-1<<endl;
    }
    return 0;
}