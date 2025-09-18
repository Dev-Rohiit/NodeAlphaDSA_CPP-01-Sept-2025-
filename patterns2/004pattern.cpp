#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int no;
        if(i%2==0){
            //even
            no = 0;
        }else{
            //odd
            no = 1;
        }

        int j = 1;
        while(j<=i){
            cout<<no;
            no = 1 - no;
            j++;
        }
    cout<<endl;
    i++;
    }
    return 0;

}