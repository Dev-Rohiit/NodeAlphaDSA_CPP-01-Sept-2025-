#include<iostream>
#include<cstring>
using namespace std;
// void copyString(char str1[], char str2[]){
//     int i = 0;
//     int j = 0;
//     while (str2[j]!='\0')
//     {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }
//     str1[i] = '\0';
    
// }

int main(){
    char str1[] = "abcdef";
    char str2[] = "xyz";
    // copyString(str1, str2);
    strcpy(str1, str2);
    cout<<str1<<endl;
    return 0;
}