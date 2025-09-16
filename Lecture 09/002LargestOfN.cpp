#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lsf = INT_MIN; //largest so far
    int x;
    int i = 1;
    while (i<=n){
        //read the first number...
        cin>>x;
        //compare it with lsf
        if (x>lsf)
        {
            lsf = x;
        }
        //update lsf
        i = i+1;
    }
    cout<<"Largest number is: "<<lsf<<endl;

    return 0;
}