#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0;
    while (n>0)
    {
        //Extract the Last digit...
        int ld = n%10;
        //calculate the 1st reversed number
        rev = rev*10+ld;
        //eliminate the last disit from n
        n = n/10;
    }
    cout<<"Reversed Number is: "<<rev<<endl;
    return 0;
}