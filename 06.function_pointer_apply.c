#include <stdio.h>

void add(int num1, int num2);
void sub(int num1, int num2);

int main()
{
	int x, y;
	char c;
	void(*pointer) (int, int);

	printf("�Է� : ");
	scanf("%d %c %d", &x, &c, &y);

	/*if ('+' == c)
		add(x, y);

	else if ('-' == c)
		sub(x, y);*/

	if ('+' == c)
		pointer = add;

	else if ('-' == c)
		pointer = sub;

	pointer(x, y);
}

void add(int num1, int num2)
{
	int result;
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);
}

void sub(int num1, int num2)
{
	int result;
	result = num1 - num2;
	printf("%d - %d = %d\n", num1, num2, result);
}
// 15 ~ 19��° ��
// ���ڰ� +, - �϶� �Լ��� �θ��� ���ǹ�
// '+' == c, '-' == c��� ������ �ǹ����� �ſ� �����ϴ� �ͼ���������

// 21 ~ 27��° ��
// ���ڰ� +, - �϶� �Լ� �����Ϳ� �Լ��� �ּڰ��� �����ϴ� ���ǹ�
// ���� �Լ��� �θ��� ���ϰ� �Լ� �����͸� ���� ���ϰ� ��� �� ������?
// �ð� ������ �غ��� 0.0000005������ ���̳����� �������� �� ���� �ȳ��� ��
// ����ü�� Ŭ������ ����ϸ� �����ս��� �ö󰡴ϱ� �׶� ����