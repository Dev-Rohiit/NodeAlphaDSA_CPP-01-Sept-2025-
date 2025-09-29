#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 3;
    cout<<"a is:  "<<(a*=b-1)<<endl;

    a = 5;
    b = 3;
    cout<<"a is:  "<<((a*=b)-1)<<endl;

    a = 5;
    b = 3;
    cout<<"a is:  "<<(a = a*b-1)<<endl;

    return 0;
}