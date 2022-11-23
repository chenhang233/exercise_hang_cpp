#include <iostream>
using namespace std;

void sort(int*arr, int len) {
	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main13() {
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

	int arr[] = { 1,5,6,4,7 };
	sort(arr, 5);

	system("pause");
	return 0;
}


