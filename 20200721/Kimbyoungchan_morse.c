#include <stdio.h>


char* changeMorescode(char en);
char* changeMorescode_char(int* arr[]);

// . => 2, - = > 1.

int morsecode[26][4] = { { 2,1 },{ 1,2,2,2 },{ 1,2,1,2 },{ 1,2,2 },
{ 2 },{ 2,2,1,2 },{ 1,1,2 },{ 2,2,2,2 },{ 2,2 },{ 2,1,1,1 },
{ 1,2,1 },{ 2,1,2,2 },{ 1,1 },{ 1,2 },{ 1,1,1 },{ 2,1,1,2 },
{ 1,1,2,1 },{ 2,1,2 },{ 2,2,2 },{ 1 },{ 2,2,1 },{ 2,2,2,1 },
{ 2,1,1 },{ 1,2,2,1 },{ 1,2,1,1 },{ 1,1,2,2 } };

void main() {
	char scan_eng;
	char* result_morsecode;

	printf("영문자를 입력 해주세요. \n");
	scanf_s("%c", &scan_eng);
	
	result_morsecode = changeMorescode(scan_eng);

	printf("모스 부호는 %s 입니다", result_morsecode);

	system("pause");
}

char* changeMorescode(char en) {
	char Eng[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	char eng[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	char* result;

	for (int i = 0; i < sizeof(Eng); i++) {
		if (en == Eng[i]) {
			result = changeMorescode_char(morsecode[i]);
			break;
		}
		else if (en == eng[i]) {
			result = changeMorescode_char(morsecode[i]);
			break;
		}
		
	}

	return result;

}

char* changeMorescode_char(int* arr[]) {
	char mor[1024] = ""	;

	for (int i = 0; i < sizeof(arr); i++) {
		if (arr[i] == 2) {
			strcat(mor, " . ");
		}
		else if (arr[i] == 1) {
			strcat(mor, " - ");
		}

		
	}
	return mor;
}