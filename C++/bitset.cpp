#include<iostream>
#include<bitset>
#include<iomanip>
using namespace std;

int main(void)
{
	bitset <8> b('a');
	
	cout << b << endl << fixed << setprecision(10) << one << endl;
	
	for(int i =0; i<b.size(); i++){
		cout << b[i] <<" ";
	}
	
	cout << endl;
	
	cout << "�Ƿ���1" << b.any() << endl;
	cout << "�Ƿ񲻴���1" << b.none() << endl;
	cout << "b��Ԫ�صĸ���" << b.size() << endl;
	cout << "�±�Ϊi��Ԫ���ǲ���1��" << b.test(0) << endl; 
	 
 } 
