#include<iostream>
using  namespace std;
    int x = 5; //global scope
    // cout<<x<<endl;
int main(){
    int y = 10; //local variable
    int x  = 30;
    cout<< x << " " <<::x;
    return 0;
}