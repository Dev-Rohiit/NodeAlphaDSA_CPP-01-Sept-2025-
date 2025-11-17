// n <= 100

#include<iostream>
using namespace std;

void ReadStr(char str[], int delimeter = '\n'){
	char ch;
	int i = 0;
	while (true)
	{
		if (ch == delimeter)
		{
			break;
		}
		ch = cin.get();
		str[i] = ch;
		i++;
		
	}
	str[i] = '\0';
	
}
int main() {
	char str[101];

	cout << "Enter a string : ";
	// cin>>str;
	ReadStr(str, '$');

	cout << "You've entered : " << str << endl;

	return 0;
}