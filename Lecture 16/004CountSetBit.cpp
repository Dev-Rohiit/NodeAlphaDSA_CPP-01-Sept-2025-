#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //assume total bits are 32
    int n = 15;
    int count = 0;
    for (int k = 0; k <=31; k++)
    {
        if (n>>k&1)
        {
            count++;
        }
    }
    cout<<"Total Set Bits are: "<<count<<endl;
    
    return 0;
}