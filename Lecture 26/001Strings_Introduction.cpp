#include<iostream>
// #include<cstring>
#include<string>

using namespace std;

int main() {

	// declaring a string 
    string str1;
    str1 = "Hello World!";
    cout<<"I am str1: "<<str1<<endl;

    string str2;
    str2 = "World HEllo";
    cout<<"I am str2: "<<str2<<endl;
    
    // assigning a string literal 
    str2 = str1;
    cout<<"I am str2: "<<str2<<endl;
	// printing a string
	
	// indexing into a string
    cout<<"I am str1: "<<str1[0]<<endl;
    cout<<"I am str1: "<<str1[5]<<endl;

	// initialising a string
    string str3 = "Welcome to C++ programming";
    cout<<"I am str3: "<<str3<<endl;

	// creating a copy of string
    string str4 = str3;
    cout<<"I am str4: "<<str4<<endl;

	// reading input into a string

	// 1. using cin >> 
    string str5;
    cin>>str5; // reads input until space is encountered
    cout<<"I am str5: "<<str5<<endl;

	// 2. using getline
    string str6;
    getline(cin, str6); // reads the whole line including spaces
	// getline(cin, str5); // '\n' is the default delimiting char.
    cout<<"I am str6: "<<str6<<endl;

	
	return 0;
}