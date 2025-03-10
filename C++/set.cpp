#include<iostream>
#include<set>
using namespace std;

int main(void){
	set <int> s;
	
	s.insert(3);
	s.insert(2);
	s.insert('A');
	
	for(auto p = s.begin(); p != s.end(); p++){
		cout << *p <<" "; 
	}
	cout << endl;
	
	cout <<(s.find(2) != s.end()) << endl;
	cout <<(s.find(4) != s.end()) << endl;
	
	s.erase('A');
	cout <<(s.find('A') != s.end());
}
