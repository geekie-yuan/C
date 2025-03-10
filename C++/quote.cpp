#include<iostream>
using namespace std;
void c(int &a)
{
	a += 1;
}

int main(void){
	int a = 4;
	c(a);
	cout << a << endl;
	return 0;
} 
