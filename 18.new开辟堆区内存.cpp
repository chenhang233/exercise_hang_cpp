#include <iostream>

using namespace std;

int main1() {
	// ���ٵ�����,�ֶ��ͷ�
	int*p = new int(10);
	int* arr = new int[10];

	delete p;
	delete[] arr;
	system("pause");
	return 0;
}