#include <stdio.h>

int main()
{
	int arr[3] = { 10, 20, 30 };
	int* ap = NULL;
	
	ap = arr;

	for (int i = 0; i < 3; ++i)
		printf("arr[%d] = %d\n",i, arr[i]);
	printf("\n");

	for (int i = 0; i < 3; ++i)
		printf("ap[%d] = %d\n", i, ap[i]);
}
// 8��° ��
// ������ ������ �迭�� ����
// int* arr1[3]�� ���� 

// 14, 15��° ��
// ������ ������ �迭�� ����Ͽ� ���� ������ش�.