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
	// ����ָ�� ���Ը�ָ��,���ܸ�ָ���ֵ
	const int * p1 = &a;
	p1 = &b;
	// ָ�볣�� ���Ը�ֵ ���ܸ�ָ��
	double* const p2 = &c;
	*p2 = 6.2;
	// ������	  ָ���ֵ�����ܸ�
	const int* const p3 = &b;
	cout << "* �� 32λ����ϵͳ��ռ��:" << sizeof(p) << endl;

	int arr[] = { 1,5,6,4,7 };
	sort(arr, 5);

	system("pause");
	return 0;
}


