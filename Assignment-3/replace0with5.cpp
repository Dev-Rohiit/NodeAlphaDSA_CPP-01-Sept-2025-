#include<iostream>
using namespace std;
int main(){
    int n = 100;
    //replace 0 with 5
    int ans = 0;
    while (n>0)
    {
        int digit = n%10;
        if(digit ==0){
            digit = 5;
        }
        ans = ans*10 + digit;
        n = n/10;
    }
    cout<<ans<<endl;
    
    return 0;
}