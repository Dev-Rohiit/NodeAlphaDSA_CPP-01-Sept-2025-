#include<iostream>
#include<cstring>
using namespace std;
// void appendString(char* str1, char* str2){
//     int i = strlen(str1);
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
    char str1[100] = "Hello";
    char str2[] = "World!";
    // appendString(str1, str2);
    strcat(str1, str2);
    cout<<str1<<endl;
    return 0;
}