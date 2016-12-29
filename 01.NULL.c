#include <stdio.h>

int main()
{
	char* ch = NULL;
	int* integer = NULL;
	double* real = NULL;

	printf("ch, integer, real\n");
	printf("%2d %7d %6d\n", ch, integer, real);
	printf("\n");

	/*printf("*ch, *integer, *real\n");
	printf("%3d %8d %7d\n", *ch, *integer, *real);
	printf("\n");*/

	printf("&ch,     &integer,&real\n");
	printf("%3d %8d %7d\n", &ch, &integer, &real);
	printf("\n");

	printf("sizeof(ch), sizeof(integer), sizeof(real)\n");
	printf("%10d %16d %13d\n", sizeof(ch), sizeof(integer), sizeof(real));
	printf("\n");

	printf("sizeof(*ch), sizeof(*integer), sizeof(*real)\n");
	printf("%11d %17d %14d\n", sizeof(*ch), sizeof(*integer), sizeof(*real));
	printf("\n");

	printf("sizeof(&ch), sizeof(&integer), sizeof(&real)\n");
	printf("%11d %17d %14d\n", sizeof(&ch), sizeof(&integer), sizeof(&real));
	printf("\n");
}
// 9 ~ 11��° ��
// �� ������ �������� NULL�� �ʱ�ȭ �Ͽ���.
// ������ �������� ����Ű�� �ּҰ� �����Ƿ� 0�� ���

// 13 ~ 15��° ��
// �� �������� NULL�� �ʱ�ȭ �Ͽ���.
// �׷��Ƿ� �� ������ ���� �ƹ��͵� ������ ���� �����Ƿ� *�� �̿��Ͽ� ���� ȣ���ϸ� ������ ����.
// C������ NULL�� ǥ�������� C++ ������ nullptr�� ǥ���̹Ƿ� �����ϵ���
// �����ͷ� ������ ������ �ʱ�ȭ ���� �ʰ� ȣ���� �ϸ� �ſ� ū�ϳ��� ����
// �׷��Ƿ� ó���� �����͸� NULL Ȥ�� nullptr�� ���Ǹ� �ϰ� ������ ��

// 17 ~ 19��° ��
// �� ������ ������ �ּҸ� 10������ ����Ѵ�

// 21 ~ 23��° ��
// ������ ������ ����Ű�� �ּ��� �޸� ũ�⸦ ����� �ִ�.

// 25 ~ 27��° ��
// *�� ����Ͽ� �� ������ �������� ���� �޸� ������ ũ�⸦ ���� �� �ִ�.

// 29 ~ 31��° ��
// �� ������ ������ ����� �ּҰ��� ��� ������ 4byte�� �����Ѵ�.

// �����ս��� ���ؼ��� �����͸� �� ���°� �����ϱ� �� ��쵵��