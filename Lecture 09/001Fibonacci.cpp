#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a = 0;
    int b = 1;
    int i = 2;
    if (n==0)
    {
        cout<<a<<endl;
        return 0;
    }
    
    while (i<=n)
    {
        int c = a+b;
        a = b;
        b = c;
        i = i+1;
    }
    cout<<b<<endl;
    return 0;
}