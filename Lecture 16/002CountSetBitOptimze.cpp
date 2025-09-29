#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 15;
    int count = 0;
    for (int k = 0; k <ceil(log2(n+1)); k++)
    {
        if (n>>k&1)
        {
            count++;
        }
    }
    cout<<"Total Set Bits are: "<<count<<endl;
    
    return 0;
}