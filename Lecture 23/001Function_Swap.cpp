#include<iostream>
using namespace std;
void myswap(int& a, int& b){
    swap(a, b);
}
int main(){
    int a = 5;
    int b = 10;
    cout<<"Before swapping a is :"<<a<<" and b is: "<<b<<endl;
    myswap(a, b);
    cout<<"Before swapping a is :"<<a<<" and b is: "<<b<<endl;

    return 0;
}