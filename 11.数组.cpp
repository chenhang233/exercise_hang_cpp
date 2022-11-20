#include <iostream>

using namespace std;

int main11() {
	int arr[10] = {1, 2};
	arr[1] = 10;
	arr[5] = 50;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}