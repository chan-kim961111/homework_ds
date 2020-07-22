#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int A = 0;

struct exam01 {
	char name[20];
	int age;
};

void swaparry(exam01* ex, int i, int j) {
	exam01 temp;
	temp = ex[i];
	ex[i] = ex[j];
	ex[j] = temp;
}

void sortarry(exam01* ex) {

	for (int i = 0; i <5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (ex[i].age >= ex[j].age) {
				swaparry(ex, i, j);
			}
		}
		
	}

}



void main() {
	struct exam01 exam[5];
	char sc_name[20] = "";
	int sc_age;

	for (int i = 0; i < 5; i++) {
		printf("\n----------------------------");
		printf("\n이름은 입력하세요 : ");
		scanf("%s", &sc_name);
		strcpy(exam[0].name, sc_name);

		printf("\n나이를 입력하세요 : ");
		scanf("%d", &sc_age);
		exam[i].age = sc_age;
		printf("\n----------------------------");

	}

	sortarry(exam);

	printf("\n가장 작은 나이는 %d이고 이름은 %s 입니다.", exam[0].age, exam[0].name);
}
