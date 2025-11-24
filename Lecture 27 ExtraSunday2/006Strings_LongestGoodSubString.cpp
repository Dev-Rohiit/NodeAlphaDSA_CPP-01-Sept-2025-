#include<iostream>
#include<algorithm>

using namespace std;
bool isGoodString(string str) {
for (int i = 0; i < str.size(); i++)
	{
		char ch = str[i];
		if (!(ch=='a'|| ch =='e'||ch=='i'||ch=='o'||ch=='u'))
		{
			//ch is consonent
			return false;
		}
	}
	return true;
}
int main() {

	string str = "cbaeicdeiou";
	int n = str.size();

	// approach 1 - time : O(n^3) space : O(1)
	int max_len = 0;// to store the length of longest good subString found so far
	// iterate over all the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over all the possible ending indices
		for(int j=i; j<n; j++) {
			// extract the substring that starts at the ith index and ends at the jth index
			string subString = str.substr(i, j-i+1);
			// check if the subString is a good subString or not
			if(isGoodString(subString)){
				// subString is a good subString
				max_len = max(max_len, j-i+1);
			}
			
		}
	}
	cout << "Length of longest good subString is: " << max_len << endl;

	
	return 0;
}