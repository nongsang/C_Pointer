#include <stdio.h>

void add(double num1, double num2);

int main()
{
	double x = 3.1, y = 5.1;
	void(*pointer) (double, double) = NULL;

	printf("add : %d\n", add);
	printf("&add : %d\n", &add);
	printf("*add : %d\n", *add);
	printf("pointer : %d\n", pointer);
	printf("&pointer : %d\n", &pointer);
	printf("*pointer : %d\n", *pointer);

	printf("\n");

	pointer = add;
	pointer(x, y);

	printf("\n");

	printf("pointer : %d\n", pointer);
	printf("&pointer : %d\n", &pointer);
	printf("*pointer : %d\n", *pointer);
}

void add(double num1, double num2)
{
	double result;
	result = num1 + num2;
	return printf("%lf + %lf = %lf\n", num1, num2, result);
}
// 8번째 줄
// 함수 포인터도 포인터 변수와 같이 NULL로 초기화가 가능하다.

// 10 ~ 12번째 줄
// 모든 값은 함수가 존재하는 메모리 주소값을 가리킨다.
// add라는 함수만 부르는 경우에는 함수가 있는 주소값을 반환한다.

// 13 ~ 15번째 줄
// 함수 포인터는 값을 가지고 있지 않으므르 주소값만 가진다.

// 19번째 줄
// 함수 포인터에 함수의 주소값을 대입한다.

// 24 ~ 26번째 줄
// 19번째 줄에서 함수 포인터에 함수의 주솟값을 저장했으니
// 호출했을때 함수의 주솟값이 호출된다.