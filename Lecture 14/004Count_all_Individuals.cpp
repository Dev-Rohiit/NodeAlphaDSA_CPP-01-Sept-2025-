#include<iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int Alphabets = 0;
    int whitespaces = 0;
    int digit = 0;
    int specialChar = 0;
    while (ch!='$')
    {
        
        if (ch>='A' and ch<='Z' || ch>='a' and ch<='z')
        {
            // Alphabets++;
            Alphabets = Alphabets+1;
        }
        else if(ch==' ' or ch=='\n' or ch=='\t'){
            whitespaces++;
        }else if(ch>='0' and ch<='9'){
            digit++;
        }
        else{
            specialChar++;
        }
        ch = cin.get();
        
    }
    cout<<"Alphabets: "<<Alphabets<<endl;
    cout<<"whitespaces: "<<whitespaces<<endl;
    cout<<"digit: "<<digit<<endl;
    cout<<"specialChar: "<<specialChar<<endl;
    return 0;
}