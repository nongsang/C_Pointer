#include <stdio.h>

int f(int i);

int main()
{
	int a = 10;
	int result = 0;

	result = f(a);
	printf("a : %7d\n", a);
	printf("result : %d\n", result);
}

int f(int i)
{
	i += 1;
	return i;
}
// call by value
// 변수 a를 함수 f를 통해 연산한 값을 result에 저장하는 작업을 하고 있다.
// result는 11의 값이 나오지만 a는 10이 나온다.

// (매우 중요~~~~~~~~~~~~~~~)
// a는 값을 f로 전달한 것일 뿐 실질적으로 값이 변한 것은 함수 f에 있는 매개변수 i이다.

// 10번째 줄
// int i = a 라는 연산을 하고 있다.

// 하지만 15 ~ 18번째 줄
// 연산을 끝내고 result로 값을 전달한 후 i값은 소멸하게 된다.
// 따라서 a는 값이 변경이 되지 않는다.

// call by value의 단점
// 1. 값의 불일치 현상이 발생한다.
// 2. 변수가 많아질 수록 필요 메모리가 많아진다.
//	  매개변수는 값을 복사하여 생성하므로 변수와 매개변수, 2배의 메모리가 필요하다.