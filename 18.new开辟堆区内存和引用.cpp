#include <iostream>

using namespace std;
			   // ���÷�ʽ���ղ���
void swap(int &a,int &c) {
	a = 154;
	c = 848;
}

// ������Ϊ��������ֵ cosnt ֻ������
int& test(const int& b) {
	static int a = 10;
	return a;
}

int main() {
	// ���ٵ�����,�ֶ��ͷ�
	int*p = new int(10);
	int* arr = new int[10];

	delete p;
	delete[] arr;
	int a = 10;
	int& b = a;	  
	int c = 50;
	b = 100;
	cout << a << "---" << b << endl;
	swap(a, c);
	cout << a << "---" << c << endl;
					
	int& ref = test();  // ���ñ��� (����)
	cout <<ref<< endl;
	test(1) = 500;	   	// test������������,������Ϊ��ֵ
	cout << ref << endl;

	system("pause");
	return 0;
}