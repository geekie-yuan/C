#include<iostream>
#include<stack>
using namespace std;
int main(void){
	stack <int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.pop();
//	s.push(76);
	
	cout << s.top() << endl;
	cout << "ջ�ĳ���Ϊ��" << s.size() << endl;
	
	return 0; 
}
