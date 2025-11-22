#include<iostream>
#include<cstring>

using namespace std;
bool isAnagram(char* str1, char* str2){
	//1. build a freq1 array corr. to str1
	int freq1[26] = {};
	for (int i = 0; str1[i]!='\0'; i++)
	{
		char ch = str1[i];
		int idx = ch-'a';
		freq1[idx]++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout<<freq1[i]<<" ";
	}
	cout<<endl;
	
	//2. build a freq2 array corr. to str2;
	int freq2[26] = {};
	for (int i = 0; str1[i]!='\0'; i++)
	{
		freq2[str1[i]-'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout<<freq2[i]<<" ";
	}
	cout<<endl;
	//3. compare both the arrays
	for (int i = 0; i < 26; i++)
	{
		if (freq1[i]!=freq2[i])
		{
			return false;
		}
		
	}
	return true;
	
}
int main() {

	char str1[] = "state";
	char str2[] = "taste";

	isAnagram(str1, str2) ? cout << "true" << endl :
	                        cout << "false" << endl;

	return 0;
}