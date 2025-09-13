#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int i = 1;
    while(i<=n){
        //spaces
        int j = 1;
        while(j<=i-1){
            cout<<" ";
            j++;
        }
        //stars
        int k = 1;
        while(k<=n-i+1){
            cout<<"*";
            k++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}