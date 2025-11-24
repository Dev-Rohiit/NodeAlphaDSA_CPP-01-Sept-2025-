#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	string str = "abcde";
	int n = str.size();

	// iterate over all the possible starting indices
		for (int i = 0; i <n; i++)
		{
			//iterate over all the possible ending indices
			for (int j = i; j <n; j++)
			{
				cout<<str.substr(i, j-i+1)<<" ";
			}
			cout<<endl;	
		}
		
	
	
	return 0;
}