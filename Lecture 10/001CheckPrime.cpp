#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //initialize a variable to keep track of the current number we are checking
    int i =2;
    //conditon to check if we have checked all the numbers from 2 to sqrt(n)
    while (i<=n-1)
    {
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Prime"<<endl;

    return 0;
}