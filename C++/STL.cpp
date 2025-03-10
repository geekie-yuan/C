#include<iostream>
#include<vector>
using namespace std;

int main(void){
	vector <int> v;
	cout << v.size(); 
	
	v.resize(10);
	cout << endl << v.size();
	
	v.push_back(66);
	cout << endl << v.size();
	
	for(auto p = v.begin(); p!=v.end(); p++)
	cout << *p << " "; 
} 
