#include <stdio.h>

struct student {
	char name[10];
	int student_num;
	int score[3];
};

int main(void) {
	struct student info[3] = {
		{"ȫ�浿", 20243453, {80, 80, 80}},
		{"������", 20234561, {80, 85, 90}},
		{"�̼���", 20248976, {80, 90, 100}}
	};

	printf("---------------�л� �������---------------\n");

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += info[i].score[j];
		}
		double avg = (double)sum / 3.0;

		printf("�̸� : %s, �й� : %d ������� : %.2lf\n", info[i].name, info[i].student_num, avg);
	}

	return 0;
}