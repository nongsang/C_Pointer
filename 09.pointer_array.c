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
// 배열 포인터와 포인터 배열의 의미가 다르다
// 배열 포인터는 값을 배기는 배열을 포인터 변수를 사용하여 컨트롤 할 수 있다.
// 포인터 배열은 변수들의 주소값들을 저장하는 배열을 정의하여 컨트롤 할 수 있다.