#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(int x, int y)
{
	return x > y;
}

int main(void){
	vector <int> m(10);
	for(int i = 0; i<10; i++){
		m[i] = 10 - i;
	}
	m.push_back(-1);
	for(int i =0; i<11; i++){
		cout << m[i] << " ";
	}
	cout << endl;
	
	sort(m.begin(), m.end());
	
	for(int i=0; i<11; i++){
		cout << m[i] << " ";
	}
	cout << endl;
	
	sort(m.begin(), m.end(), cmp);
	for(int i=0; i<11; i++){
		cout << m[i] << " ";
	}
	
}
