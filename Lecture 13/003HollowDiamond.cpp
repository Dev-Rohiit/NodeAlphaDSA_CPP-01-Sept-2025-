#include<iostream>
using namespace std;
int main(){
    int n = 9;
    int m = n/2;
    //Print the first raw 'n' times
    for (int i = 1; i <=n; i++)
    {
        cout<<"*";
    }
    cout<<endl;

    //Middle upper Half of the pattern
    for (int i = 1; i <= m; i++)
    {
        //print the left half 'm-i+1' stars
        for (int j = 1; j <=m-i+1; j++)
        {
            cout<<"*";
        }
        
        //print the '2i-1' spaces
        for (int j = 1; j <=2*i-1; j++)
        {
            cout<<" ";
        }
        
        //print the left half 'm-i+1' stars
        for (int j = 1; j <=m-i+1; j++)
        {
            cout<<"*";
        }

    cout<<endl;
        
    }

    //Middle Lower Half of the pattern
    for (int i = 1; i <=m-1; i++)
    {
        //print the 'i+1' stars
        for (int j = 1; j <=i+1; j++)
        {
            cout<<"*";
        }
        //print the middle '2(m-i)-1' spaces
        for (int j = 1; j <=2*(m-i)-1; j++)
        {
            cout<<" ";
        }
        //print the 'i+1' stars
        for (int j = 1; j <=i+1; j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }

    //print the last raw 'n' times
    for (int i = 1; i <=n; i++)
    {
        cout<<"*";
    }
    cout<<endl;

    
    return 0;
}