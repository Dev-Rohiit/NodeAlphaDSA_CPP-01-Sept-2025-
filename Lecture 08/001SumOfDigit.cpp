#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        // Extract the last digit
        int d = n%10;
        // Add it to sum
        sum = sum +d;
        // Remove the last digit
        n = n/10;
    }
    cout<<"sum of digits is "<<sum<<endl;
    return 0;
}