#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 3;
	int* pointer[3] = { NULL, NULL, NULL };

	pointer[0] = &a;
	pointer[1] = &b;
	pointer[2] = &c;

	for (int i = 0; i < 3; ++i)
		printf("%d ", *pointer[i]);
	printf("\n");
}
// �迭 �����Ϳ� ������ �迭�� �ǹ̰� �ٸ���
// �迭 �����ʹ� ���� ���� �迭�� ������ ������ ����Ͽ� ��Ʈ�� �� �� �ִ�.
// ������ �迭�� �������� �ּҰ����� �����ϴ� �迭�� �����Ͽ� ��Ʈ�� �� �� �ִ�.