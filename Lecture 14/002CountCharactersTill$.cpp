#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int cnt = 0;
    while (ch!='$')
    {
        cin>>ch;
        cnt++;
    }
    cout<<cnt;
    
    return 0;
}