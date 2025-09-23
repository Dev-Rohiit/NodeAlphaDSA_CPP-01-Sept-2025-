#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int m = n-n/2;
    for (int i = 1; i <=m; i++)
    {
        //print the 'i' star..
        for (int j = 1; j <=i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = 1; i <= m-1; i++)
    {
        //print the 'm-i' stars...
        for (int j = 1; j <=m-i; j++)
        {
                cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}