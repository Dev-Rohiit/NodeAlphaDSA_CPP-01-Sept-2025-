#include<iostream>
using namespace std;
int main(){
    int A[5] = {10,20,30,40,50};
    cout<<A[0]<<endl;
    cout<<A[1]<<endl;
    cout<<A[2]<<endl;
    cout<<A[3]<<endl;
    cout<<A[4]<<endl;
    cout<<A[5]<<endl; //garbage value

    int B[] = {10,20,30,40,50};
    cout<<B[0]<<endl;
    cout<<B[1]<<endl;
    cout<<B[2]<<endl;
    cout<<B[3]<<endl;
    cout<<B[4]<<endl;

    // int C[5] = {10,20,30,40,50,60};
    cout<<endl;

    int D[5] = {10,20,30};
    cout<<D[0]<<endl;
    cout<<D[1]<<endl;
    cout<<D[2]<<endl;
    cout<<D[3]<<endl;
    cout<<D[4]<<endl;

    int E[5] = {};
    cout<<E[0]<<endl;
    cout<<E[1]<<endl;
    cout<<E[2]<<endl;
    cout<<E[3]<<endl;
    cout<<E[4]<<endl;

    return 0;

}