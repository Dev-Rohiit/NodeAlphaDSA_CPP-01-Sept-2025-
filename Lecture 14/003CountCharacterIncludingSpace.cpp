#include<iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int cnt = 0;
    while (ch!='$')
    {
        
        ch = cin.get();
        cnt++;
    }
    cout<<cnt;
    
    return 0;
}