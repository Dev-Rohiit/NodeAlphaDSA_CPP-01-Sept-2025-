#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int i =1;
    while (i<=n)
    {
        int j = 1;
        int no = 1;
        while(j<=i){
            cout<<no;
            no++;
            j = j+1;
        }
    cout<<endl;
    i = i+1;
    }
    
}