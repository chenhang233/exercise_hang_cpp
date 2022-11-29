#include <iostream>
using namespace std;

typedef struct student {
	string name;
	int age;
	float score;
} Student;

void printStu1(Student s) {
	cout << s.name << endl;
}

void printStu2(const Student *p) {
	//p->age = 500;
}


int main14() {
	Student s1 = { "zs", 50, 6.1 };
	Student s2[5] = {
		{"a", 4,54},
		{"b", 54, 8}
	};
	printStu1(s1);
	printStu2(&s1);
	Student* p = &s1;
	cout << s1.name << s1.age << "\n   ----name age-----" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << s2[i].name << s2[i].age << s2[i].score << '\n' << endl;
	}

	cout << p->age << '\n' << endl;

	system("pause");
	return 0;
}