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
// 8번째 줄
// 포인터 변수에 배열을 저장
// int* arr1[3]을 만들어서 

// 14, 15번째 줄
// 포인터 변수가 배열을 대신하여 값을 출력해준다.