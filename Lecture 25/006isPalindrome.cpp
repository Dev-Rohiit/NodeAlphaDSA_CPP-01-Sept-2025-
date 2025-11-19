#include<iostream>
#include<cstring>

using namespace std;

// time : O(n) space : O(1)
bool isPalindrome(char str[]){
    int i = 0;
    int j = strlen(str)-1;
    while(i<j){
        if(str[i]!=str[j]){
            // not a palindrome
            return false;
        }
        i++;
        j--;
    }
       return true;
}
int main() {

	char str[] = "potato";

	isPalindrome(str) ? cout << "true" << endl :
	                    cout << "false" << endl;	
	return 0;
}