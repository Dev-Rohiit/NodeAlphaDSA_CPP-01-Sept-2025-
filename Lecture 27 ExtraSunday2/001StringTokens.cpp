#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[] = "abc.def.ghi";
    char dlim[] = ".";
    char* token = (char*)strtok(str1, dlim);
    while (token!=NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL, dlim);
    }
    
    // cout<<token<<endl;

    // token = strtok(NULL, dlim);
    // cout<<token<<endl;

    // token = strtok(NULL, dlim);
    // cout<<token<<endl;

    // token = strtok(NULL, dlim);
    // cout<<token<<endl;



    
}