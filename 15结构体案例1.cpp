#include <iostream>
#include <ctime>
#include <string>
using namespace std;

struct Stu {
	string name;
	int score;
};

 struct Tea {
	string name;
	Stu stuArr[3];
};

void init(struct Tea tArr[]) {
	string nameMap = "ABCD";
	for (int i = 0; i < 3; i++)
	{
		tArr[i].name = "老师";
		tArr[i].name  += nameMap[i];
		for (int j = 0; j < 3; j++)
		{
			tArr[i].stuArr[j].name = "学生";
			tArr[i].stuArr[j].name += nameMap[j];
			tArr[i].stuArr[j].score = rand() % 60 + 20;
		}
	}
}


void printInfo(struct Tea tArr[]) {
	for (int i = 0; i < 3; i++)
	{
		cout << tArr[i].name << endl;
	for (int j = 0; j < 3; j++)
		{
			cout << '\t' << tArr[i].stuArr[j].name << endl;
			cout << "分数=" << tArr[i].stuArr[j].score << endl;

		}
	}
}

int main15() {
	srand((unsigned int)time(NULL));
	struct Tea teaArr[3] = {};
	init(teaArr);
	printInfo(teaArr);
	system("pause");
	return 0;
}