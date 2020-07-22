#include <stdio.h>
#include <stdlib.h>

void main() {
	int arr_size;
	float sum = 0.0;
	printf("\n배열의 크기를 입력하세요.");
	scanf_s("%d", &arr_size);

	float* arr = (float*) malloc(sizeof(float)*arr_size);

	for (int i = 0; i < arr_size; i++) {
		printf("\n실수를 입력하세요.");
		scanf("%f", &arr[i]);
		sum += arr[i];
	}

	printf("\n합계는 %.2f이고 평균은 %.2f이다.", sum, sum / arr_size);
}