#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=65 and ch<='Z'){
        cout<<"You have pressed an uppercase letter"<<endl;
    }else if(ch>='a' and ch<='z'){
        cout<<"You have pressed an lowercase letter"<<endl;
    }else if(ch>='0' and ch<='9'){
        cout<<"You have pressed a Number"<<endl;
    }else{
        cout<<"You have entered any special character";
    }

    return 0;
}