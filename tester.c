#include <stdio.h>

void main() {
	printf("세 개의 정수 입력 >> ");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int max = a > b && a > c ? a : b > a && b > c ? b : c;
	printf("가장 큰 수 %d", max);
}
