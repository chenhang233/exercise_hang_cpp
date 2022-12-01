#include <iostream>

using namespace std;

int main1() {
	// 开辟到堆区,手动释放
	int*p = new int(10);
	int* arr = new int[10];

	delete p;
	delete[] arr;
	system("pause");
	return 0;
}