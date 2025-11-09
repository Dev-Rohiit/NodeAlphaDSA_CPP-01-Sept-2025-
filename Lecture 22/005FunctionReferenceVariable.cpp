#include<iostream>
using namespace std;
int main(){
    // int x = 10;
    // int y = x;
    // x++;
    // cout<<x<<endl;
    // cout<<y<<endl;

    int x = 10;
    x = 20;
    int& y = x;
    x++;
    cout<<x<<endl;
    cout<<y<<endl;


    return 0;
}