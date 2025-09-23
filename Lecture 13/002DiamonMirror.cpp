#include<iostream>
using namespace std;
int main(){
    int n = 9;
    int m = n-n/2;
    //upper half of the diamond
    for (int i = 1; i <=m; i++)
    {
        //print 'm-i' spaces..
        for (int j = 1; j <=m-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=2*i-1; j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
    //print lower half
     for (int i = m-1; i>=1; i--)
    {
        //print 'm-i' spaces..
        for (int j = 1; j <=m-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=2*i-1; j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }

    
    return 0;
}