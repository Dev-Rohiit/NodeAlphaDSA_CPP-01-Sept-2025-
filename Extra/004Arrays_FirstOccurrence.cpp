#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,20,40};
    int n = sizeof(arr)/sizeof(int);
    int t = 20;
    int i = 0;
    while (i<n)
    {
        if(arr[i]== t){
            cout<<"Target "<<t<< " Found at index: "<<i;
            return 0;
        }
        i++;
    }
    cout<<-1;


    return 0;
}