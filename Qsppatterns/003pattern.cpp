#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int i = 1;
    while(i<=n){
        //stars
        int j = 1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
    cout<<endl;
    i++;
    }
    
    return 0;
}