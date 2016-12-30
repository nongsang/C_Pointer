#include <stdio.h>

int main()
{
	char c = 'A';
	char* cp = NULL;
	char** cpp = NULL;

	cp = &c;
	cpp = &cp;

	printf("c, cp, cpp\n");
	printf("%c, %2c, %4c\n", c, cp, cpp);
	printf("%d, %d, %d\n", c, cp, cpp);

	printf("\n");

	printf("c, *cp, *cpp\n");
	printf("%c, %3c, %4c\n", c, *cp, *cpp);
	printf("%d, %d, %d\n", c, *cp, *cpp);

	printf("\n");

	printf("c, *cp, **cpp\n");
	printf("%c, %3c, %5c\n", c, *cp, **cpp);
	printf("%d, %d, %d\n", c, *cp, **cpp);
}
// 12 ~ 14��° ��
// ���� c�� ��� ���� ���� A�̱� ������ c�� �θ��� A�� ���
// ������ cp�� �θ��� �� ���� c�� �ּҰ��� ����Ű�� ������ �̻��� ���ڰ� ��µȴ�.
// cpp�� cp�� �ּҰ��� �����Ƿ� ��������

// 18 ~ 20��° ��
// cp�� ��� *�� �ٿ��� ������(dereferencing)�Ͽ����Ƿ� c�� �ּ� ���� ���� ����Ѵ�.
// cpp�� ��� *�� �ٿ����� �������� �ѹ��� �����Ƿ� cp�� �ּ� ���� ��, �� c�� �ּҰ��� ����ϰ� �ȴ�.

// 24 ~ 26��° ��
// cpp�� ��� **�� ����Ͽ� cp�� �ּ� ���� ��(c�� �ּҰ�)���� �ٽ� �������Ͽ� c�� �ּҰ� ���� ��, �� c�� ���� ���� ����ϰ� �ִ�.