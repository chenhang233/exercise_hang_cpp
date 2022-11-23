#include <iostream>
using namespace std;

typedef struct Student {
	string name;
	int age;
	float score;
} Student;

int main() {
	Student s1 = { "zs", 50, 6.1 };
	Student s2;
	s2.score = 5.64;
	s2.age = 40;
	cout << s1.name << s1.age << s1.score << endl;
	system("pause");
	return 0;
}