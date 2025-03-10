#include<iostream>
#include<map>
using namespace std;

int main(){
	map <string, string> m;
	
	m["greed"] = "hello";
	m["name"] = "Joe";
	
	cout << m["greed"] + ' ' + m["name"] << endl;
} 
