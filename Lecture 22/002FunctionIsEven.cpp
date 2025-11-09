// #include<iostream>
// using namespace std;
// void isEven(int n){
//     if(n%2==0){
//         cout<<n<<" is even"<<endl;
//     }
//     else{
//         cout<<n<<" is odd"<<endl;   
//     }
// }
// int main(){
//     int x = 10;
//     isEven(x);
//     // isEven(5);
//     return 0;
// }


#include<iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
int main(){
    int x = 5;
    isEven(x);
    return 0;
}