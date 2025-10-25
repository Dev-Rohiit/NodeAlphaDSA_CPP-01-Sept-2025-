#include<iostream>
using namespace std;
int main(){
    // Declare an array of 5 integers and initialize it
    int arr[5] = {10,20,30,40,50};
    cout<< "arr[0]: "<<arr[0]<<endl;
    cout<< "arr[1]: "<<arr[1]<<endl;
    cout<< "arr[2]: "<<arr[2]<<endl;
    cout<< "arr[3]: "<<arr[3]<<endl;
    cout<< "arr[4]: "<<arr[4]<<endl;
    cout<< "arr[5]: "<<arr[5]<<endl;//garbage value


    int B[] = {10,20,30,40,50};
    cout<< "B[0]: "<<B[0]<<endl;
    cout<< "B[1]: "<<B[1]<<endl;
    cout<< "B[2]: "<<B[2]<<endl;
    cout<< "B[3]: "<<B[3]<<endl;
    cout<< "B[4]: "<<B[4]<<endl;

    // int C[5] = {10,20,30,40,50, 60};

    int D[5] = {10,20,30};
    cout<< "D[0]: "<<D[0]<<endl;
    cout<< "D[1]: "<<D[1]<<endl;
    cout<< "D[2]: "<<D[2]<<endl;
    cout<< "D[3]: "<<D[3]<<endl;
    cout<< "D[4]: "<<D[4]<<endl;

    int E[5] = {};
    cout<< "E[0]: "<<E[0]<<endl;
    cout<< "E[1]: "<<E[1]<<endl;
    cout<< "E[2]: "<<E[2]<<endl;
    cout<< "E[3]: "<<E[3]<<endl;
    cout<< "E[4]: "<<E[4]<<endl;



    return 0;
}