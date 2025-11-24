#include<iostream>
#include<algorithm>

using namespace std;

bool isGoodString(string str) {
	// for (int i = 0; i < str.size(); i++)
	// {
	// 	char ch = str[i];
	// 	if (!(ch=='a' || ch=='e'|| ch=='i'|| ch =='o' || ch=='u'))
	// 	{
	// 		//ch is consonent
	// 		return false;
	// 	}
	// }
	for(char ch : str){
			if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'){
			// continue;
		}		else{
			// ch is consonent
		return false;
		}
	return true;
	}
}
int main() {

	string str = "uoiea";

	isGoodString(str)? cout<<str<<" is a good string":
					   cout<<str<<" is not a good string";
	
	return 0;
}