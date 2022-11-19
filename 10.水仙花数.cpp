#include <iostream>

using namespace std;

int main() {
	int start = 100;
	int max = 1000;
	do
	{
		int hundred = start / 100, ten = start % 100 / 10, c = start % 10;
		if (hundred * hundred * hundred + ten * ten * ten + c * c * c == start) {
			cout << "水仙花数为:" << start << endl;
		}
		start++;
	} while (start < max);
for (int i = 0; i < 100; i++)
{
	for (int j = 0; j < 100; j++) {
		if(j > 5) {
		break;
	}		  
		}
}
	system("pause");
	return 0;
}