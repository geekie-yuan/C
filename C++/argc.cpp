#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
	int a = 1;
	cout << a << endl;
	for(int i=0; i < argc; i++){
		cout << argv[i] << endl;
	}
}
