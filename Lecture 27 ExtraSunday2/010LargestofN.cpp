#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    char str[101]; //to store the input string
    char lsf[101]; //to store the largest string found so far
    cin>>str;
    strcpy(lsf, str); //copy first string to lsf
    for(int i = 1; i<n;i++){
        cin>>str;
        if(strcmp(str, lsf)>0){
            strcpy(lsf, str);
        }
    }
    cout<<"Largest string is: "<<lsf<<endl;

    return 0;
}