#include<iostream>
using namespace std;
int main(){
    int n = 42;
    // int k = 3;
    // cout<<(n>>k&1)<<endl;

    int k = 4;
    // cout<<(n>>k&1)<<endl;

    if (n>>k&1)
    {
        cout<<"True";
    }else{
        cout<<"false";
    }

    return 0;
}