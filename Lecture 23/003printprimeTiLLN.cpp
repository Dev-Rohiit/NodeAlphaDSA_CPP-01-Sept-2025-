#include<iostream>
using namespace std;
int main(){
    int N = 15;
    int n = 2;
    while (n<=N)
    {
        bool isprime = true; //assume that the given number is prime
        for (int i = 2; i <= n-1; i++)
        {
            if (n%i==0)
            {
                isprime = false;
                break;
            }    
        }
        if(isprime){
            cout<<n<<" ";
        }
        n++;   
    }
    return 0;
}