#include <iostream>

using namespace std;

int main5() {
	short a1 = 10;
	int a2 = 10;
	long  a3 = 10;
	long long a4 = 10;
	cout << "a1 = " << a1 << endl;
	cout << "a2 = " << a2 << endl;
	cout << "a3 = " << a3 << endl;
	cout << "a4 = "<< a4 << endl;	
		cout << "a1 = " << sizeof(short) << endl;
		cout << "a1 = " << sizeof(int) << endl;
		cout << "a1 = " << sizeof(long) << endl;
		cout << "a1 = " << sizeof(long long) << endl;

	system("pause");
	return 0;
}