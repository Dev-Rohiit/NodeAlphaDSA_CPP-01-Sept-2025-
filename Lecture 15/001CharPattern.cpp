#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for (int i = 1; i <=n; i++)
    {
        char ch = 'A';
        //print 'n-i+1' characters
        for (int j = 1; j <=n-i+1; j++)
        {
            cout<<ch;
            ch++;
        }
        ch--;
        //print 'n-i+1' Remaining Characters...
        for (int j = 1; j <=n-i+1; j++)
        {
            cout<<ch;
            ch--;
        }
    cout<<endl;
        
    }
    
    return 0;

}