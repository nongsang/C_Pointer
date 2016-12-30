#include <stdio.h>

void add(double num1, double num2);

int main()
{
	double x = 3.1, y = 5.1;
	void(*pointer) (double, double) = NULL;

	printf("add : %d\n", add);
	printf("&add : %d\n", &add);
	printf("*add : %d\n", *add);
	printf("pointer : %d\n", pointer);
	printf("&pointer : %d\n", &pointer);
	printf("*pointer : %d\n", *pointer);

	printf("\n");

	pointer = add;
	pointer(x, y);

	printf("\n");

	printf("pointer : %d\n", pointer);
	printf("&pointer : %d\n", &pointer);
	printf("*pointer : %d\n", *pointer);
}

void add(double num1, double num2)
{
	double result;
	result = num1 + num2;
	return printf("%lf + %lf = %lf\n", num1, num2, result);
}
// 8��° ��
// �Լ� �����͵� ������ ������ ���� NULL�� �ʱ�ȭ�� �����ϴ�.

// 10 ~ 12��° ��
// ��� ���� �Լ��� �����ϴ� �޸� �ּҰ��� ����Ų��.
// add��� �Լ��� �θ��� ��쿡�� �Լ��� �ִ� �ּҰ��� ��ȯ�Ѵ�.

// 13 ~ 15��° ��
// �Լ� �����ʹ� ���� ������ ���� �����Ǹ� �ּҰ��� ������.

// 19��° ��
// �Լ� �����Ϳ� �Լ��� �ּҰ��� �����Ѵ�.

// 24 ~ 26��° ��
// 19��° �ٿ��� �Լ� �����Ϳ� �Լ��� �ּڰ��� ����������
// ȣ�������� �Լ��� �ּڰ��� ȣ��ȴ�.