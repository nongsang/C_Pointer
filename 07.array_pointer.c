#include <stdio.h>

int main()
{
	int arr[3] = { 10, 20, 30 };

	printf("arr : %d\n", arr);
	printf("&arr : %d\n", &arr);
	printf("*arr : %d\n", *arr);
}
// arr�� ȣ���ϸ� �迭�� ó�� �޸� �ּҸ� ��ȯ�Ѵ�.
// arr�� �ҷ������� &arr�� �ҷ����� ���� ���� ���´�.
// *arr�� arr�� �迭�� ó�� �޸� �κ��� ����Ű�Ƿ� �迭�� ù��°�� 10�� ���´�.