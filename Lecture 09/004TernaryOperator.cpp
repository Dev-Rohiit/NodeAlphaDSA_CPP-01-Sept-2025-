#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    // if (marks>50)
    // {
    //     cout<<"Pass"<<endl;
    // }else{
    //     cout<<"Fail"<<endl;
    // }
    marks>50 ? cout<<"pass"<<endl:
               cout<<"Fail"<<endl;

    return 0;
}