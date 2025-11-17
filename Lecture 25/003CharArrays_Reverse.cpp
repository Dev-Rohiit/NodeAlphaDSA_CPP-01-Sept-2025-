#include<iostream>
using namespace std;
#include<cstring>
#include<algorithm>


// void StringReversed(char* str){ //char str[]
// 	int i = 0;
// 	int j = strlen(str)-1;
// 	while (i<j)
// 	{
// 		swap(str[i], str[j]);
// 		i++;
// 		j--;
// 	}

// }

int main() {

	char str[] = "coding";
	cout<< "Original string : " << str << endl;
	// StringReversed(str);
	strrev(str);
	reverse(str, str+strlen(str));
	cout << "Reversed  string after 1st reverse : " << str << endl; 

	return 0;
}