#include <stdio.h>

// 1. ������ �Լ� �ȿ� ����
int* input();				// �Լ��� *���·� �����Ͽ���.

int main()
{
	int* p = NULL;

	p = input();			// ������ ���� p�� �������� �Լ��� ������ ����Ѵ�.
	printf("%d\n", *p);
}

int* input()
{
	//int num;				// ���������� ������ ��� �Լ��� ����� �� ���� �������� �ʰ� �ȴ�. ������ �߻�
	static int num;			// ������ �ذ��ϱ� ���� static�� ����ϸ� �ȴ�.
	scanf("%d", &num);
	return &num;
}
// 9��° ��
// ������ ���� p�� �������� �Լ��� ������ ����Ѵ�.
// ������ 13��° �� �Լ����� �����.

// 15��° ��
// ���������� �����Ͽ��� ������ �Լ��� �۾��� �������� �޸� ������ �Ҹ��� ���� �ʴ´�.

// 18��° ��
// ���������� �޸� ������ �Ҹ���� �ʾ����Ƿ� �ּҴ� ��ȯ�� �ȴ�.
// ������ �޸� ���� ���� ���� �Ҹ��߱� ������ ������ �߻��� �� �ִ�.


// 2. ������ �Լ� �ȿ� �迭
int* f();									// �Լ��� *���·� �����Ͽ���.

int main()
{
	int* p = NULL;

	p = f();								// ������ ���� p�� �������� �Լ��� ������ ����Ѵ�.
	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);
}

int* f()
{
	//int arr[] = { 10, 20, 30, 40 };
	static int arr[] = { 10, 20, 30, 40 };
	return arr;
}
// 46, 47��° ��
// ���������� �޸� ������ ������ ���� ���� static�� ����Ͽ� �ʱ�ȭ

// 48��° ��
// �迭�� �ڵ����� �迭�� ó�� �ּҰ��� ��ȯ��.