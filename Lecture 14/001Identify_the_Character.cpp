#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if (ch>='A' and ch<='Z')
    {
        cout<<ch<<" is Uppercase"<<endl;
    }
    else if(ch>='a' and ch<='z'){
        cout<<ch<<" is Lowercase"<<endl;
    }
    else if(ch>='0' and ch<='9'){
        cout<<ch<<" is Number"<<endl;
    }
    else{
        cout<<ch<<" is an Special Character"<<endl;
    }
    

    return 0;
}