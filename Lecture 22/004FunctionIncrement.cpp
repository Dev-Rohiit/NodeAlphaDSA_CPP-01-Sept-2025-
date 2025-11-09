#include<iostream>
using namespace std;
void increment(int& a){
    cout<<"inside the increment function before increment: "<<a<<endl;
    a++;
    cout<<"inside the increment function After increment: "<<a<<endl;
}
int main(){
    int a = 0;
    cout<<"inside the main function before increment: "<<a<<endl;
    increment(a);
    cout<<"inside the main function After increment: "<<a<<endl;
    return 0;

}