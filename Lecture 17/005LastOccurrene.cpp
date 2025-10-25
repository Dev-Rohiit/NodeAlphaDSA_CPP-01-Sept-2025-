#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,10,20};
    int n = sizeof(arr)/sizeof(int);
    int t = 1000;
    int i;
    for (i = n-1; i >=0; i--)
    {
        if (arr[i] == t)
        {
            cout<<i<<endl;
            break;
        }
    }
    if (i<0)
    {
        cout<<-1<<endl;
    }
    return 0;
}