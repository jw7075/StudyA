#include <stdio.h>

void main() {
	printf("�� ���� ���� �Է� >> ");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int max = a > b && a > c ? a : b > a && b > c ? b : c;
	printf("���� ū �� %d", max);
}
