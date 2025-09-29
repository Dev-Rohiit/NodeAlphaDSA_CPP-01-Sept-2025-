#include<iostream>
using namespace std;
int main(){
    int n = 42;
    int k = 5;

    // int k = 4;

    if (1<<k&n)
    {
        cout<<"True";
    }else{
        cout<<"false";
    }

    //ternary operator
    n>>k&1 ? cout<<"True"<<endl:
             cout<<"False"<<endl;

    return 0;
}