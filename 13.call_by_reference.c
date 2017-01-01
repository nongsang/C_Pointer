#include <stdio.h>

int f(int *i);

int main()
{
	int a = 10;
	int result = 0;

	result = f(&a);
	printf("a : %7d\n", a);
	printf("result : %d\n", result);
}

int f(int *i)
{
	*i += 1;
	return *i;
}
// call by reference

// 10��° ��
// �Ű������� ������ ������ �����ϰ� �ּҰ��� �޾Ƽ� �۾��� �����Ѵ�.
// int *i = &a �� �ǹǷ� �Ͻ����� link�� �ȴ�.
// ���� �Լ� f������ i�� ���� �ٲ�� a�� ���� ���� �ٲ�� �ȴ�.
// �׷��Ƿ� ���� ����ġ ������ �߻����� �ʴ´�.

// call by reference�� ����
// 1. ���� ����ġ ������ �߻����� �ʴ´�.
// 2. �޸� ���� ������ �پ���.
//	  ������ ������ �Ű������� ������ ��� 4byte�� ������ �ȴ�.
//	  call by value������ ������ �Ű����� 2���� �޸𸮰� �ʿ��� �Ͱ� �������̴�.
// 3. �ӵ� ���
//	  ������ ��û ū �޸𸮸� ���� �������� ����� ���̴�.
//	  100byte�̻� �Ǵ� �͵��� �ٷ� ���ε� �̵��� �����ͷ� �����ϸ� ���� 4byte������ �ٷ� �� �ִ�.
//	  ȣ���� �� �� ���� 4byte�� �ٷﵵ ��ü ������ �ٲܼ� ������ �ӵ� ��� ũ�� ������ �ȴ�.