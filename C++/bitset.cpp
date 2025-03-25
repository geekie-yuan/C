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
	
	cout << "是否有1" << b.any() << endl;
	cout << "是否不存在1" << b.none() << endl;
	cout << "b中元素的个数" << b.size() << endl;
	cout << "下标为i的元素是不是1：" << b.test(0) << endl; 
	 
 } 
