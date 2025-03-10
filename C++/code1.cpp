#include<iostream>
using namespace std;

int main(void){
	string a="Hello";
	string b=" World";
	string c;
	string d;
	cout << a<< b << endl;
	getline(cin,c);
	cout << c.length();
	cout << endl << c.substr(2,4);
}
