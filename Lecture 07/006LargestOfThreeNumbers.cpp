#include<iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 6;
    int c = 4;
    if (a>b && a>c){
        cout<<a<<" : is Largest"<<endl;
    }else if(b>c){
        cout<<b<<" : is Largest"<<endl;
    }else{
        cout<<c<<" : is Largest"<<endl;
    }

    
}