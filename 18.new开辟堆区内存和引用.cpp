#include <iostream>

using namespace std;
			   // 引用方式接收参数
void swap(int &a,int &c) {
	a = 154;
	c = 848;
}

// 引用作为函数返回值 cosnt 只读修饰
int& test(const int& b) {
	static int a = 10;
	return a;
}

int main() {
	// 开辟到堆区,手动释放
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
					
	int& ref = test();  // 引用变量 (别名)
	cout <<ref<< endl;
	test(1) = 500;	   	// test返回数据引用,可以作为左值
	cout << ref << endl;

	system("pause");
	return 0;
}