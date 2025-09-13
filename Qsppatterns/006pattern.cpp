#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int i = 1;
    while(i<=n){
        //spaces
        int j = 1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        //stars
        int k = 1;
        while(k<=2*i-1){
            cout<<"*";
            k++;
        }
    cout<<endl;
    i++;
    }
    i = 1;
    while(i<=n-1){
        //spaces
        int j = 1;
        while(j<=i){
            cout<<" ";
            j++;
        }
        //stars
        int k = 1;
        while(k<=2*(n-i)-1){
            cout<<"*";
            k++;
        }
    cout<<endl;
    i++;
    }

    return 0;
}