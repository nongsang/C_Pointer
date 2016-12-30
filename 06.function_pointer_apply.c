#include <stdio.h>

void add(int num1, int num2);
void sub(int num1, int num2);

int main()
{
	int x, y;
	char c;
	void(*pointer) (int, int);

	printf("입력 : ");
	scanf("%d %c %d", &x, &c, &y);

	/*if ('+' == c)
		add(x, y);

	else if ('-' == c)
		sub(x, y);*/

	if ('+' == c)
		pointer = add;

	else if ('-' == c)
		pointer = sub;

	pointer(x, y);
}

void add(int num1, int num2)
{
	int result;
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);
}

void sub(int num1, int num2)
{
	int result;
	result = num1 - num2;
	printf("%d - %d = %d\n", num1, num2, result);
}
// 15 ~ 19번째 줄
// 문자가 +, - 일때 함수를 부르는 조건문
// '+' == c, '-' == c라는 문법은 실무에서 매우 유용하니 익숙해지도록

// 21 ~ 27번째 줄
// 문자가 +, - 일때 함수 포인터에 함수의 주솟값을 저장하는 조건문
// 직접 함수를 부르는 것하고 함수 포인터를 쓰는 것하고 어떤게 더 빠를까?
// 시각 측정을 해보면 0.0000005초정도 차이나던데 이정도면 별 차이 안나는 듯
// 구조체나 클래스에 사용하면 퍼포먼스가 올라가니까 그때 쓰자