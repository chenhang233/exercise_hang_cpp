#include <iostream>
using namespace std;

int main() {
	int a = 100;
	int b = 4;
	double c = 5.0;
	int* p = &a;
	// 常量指针 可以改指向,不能改指向的值
	const int * p1 = &a;
	p1 = &b;
	// 指针常量 可以改值 不能改指向
	double* const p2 = &c;
	*p2 = 6.2;
	// 都修饰	  指向和值都不能改
	const int* const p3 = &b;
	cout << "* 在 32位操作系统下占用:" << sizeof(p) << endl;
	system("pause");
	return 0;
}


