#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void checkAnagram(char* str1, char* str2){
    sort(str1, str1+ strlen(str1));
    sort(str2, str2+ strlen(str2));
}
int main(){
    char str1[] = "state";
    char str2[] = "taste";
    checkAnagram(str1, str2);
    int out = strcmp(str1, str2);
    if (out==0)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}