#include <iostream>
using namespace std;

int main() {
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
	system("pause");
	return 0;
}


