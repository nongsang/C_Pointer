#include <stdio.h>

int main(int argc, char* argv[])					// main�Լ��� ���ڰ� ����
{
	int i = 0;
	printf("���ڿ��� �� : %d\n", argc);
	
	for (i = 0; i < argc; ++i)
	{
		printf("%d��° ���ڿ� : %s\n", i, argv[i]);
	}
}
// 3��° ��
// int argc�� ���ڿ��� �����Ѵ�.
// int argv�� ���ڿ��� ù��° �ּҸ� �����Ѵ�.