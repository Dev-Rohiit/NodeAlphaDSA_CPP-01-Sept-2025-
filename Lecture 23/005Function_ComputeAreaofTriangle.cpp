#include<iostream>
#include<cmath>
using namespace std;
float computeAreaOfTriangle(int b, int h){
    return 0.5*b*h;
}
float computeAreaOfTriangle(int a, int b, int c){
    int s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(){
    cout<<computeAreaOfTriangle(3,4)<<endl;
    cout<<computeAreaOfTriangle(3,4);

    return 0;
}