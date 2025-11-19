// n <= 100

#include<iostream>
using namespace std;

// void ReadStr(char str[], int delimiter = '\n'){
// 	char ch;
// 	int i = 0;
// 	while (true)
// 	{
// 		if (ch == delimiter)
// 		{
// 			break;
// 		}
// 		ch = cin.get();
// 		str[i] = ch;
// 		i++;
// 	}
// 	str[i] = '\0';
// }
int main() {
	char str[101];

	cout << "Enter a string : ";
	// cin>>str;
	// ReadStr(str, '$');
	cin.getline(str,101);
	cout << "You've entered : " << str << endl;

	return 0;
}