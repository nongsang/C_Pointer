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

// 10번째 줄
// 매개변수를 포인터 변수로 생성하고 주소값을 받아서 작업을 수행한다.
// int *i = &a 가 되므로 일시적인 link가 된다.
// 따라서 함수 f내에서 i의 값이 바뀌면 a의 값도 따라서 바뀌게 된다.
// 그러므로 값의 불일치 현상이 발생하지 않는다.

// call by reference의 장점
// 1. 값의 불일치 현상이 발생하지 않는다.
// 2. 메모리 부족 현상이 줄어든다.
//	  포인터 변수로 매개변수를 생성할 경우 4byte로 고정이 된다.
//	  call by value에서는 변수와 매개변수 2배의 메모리가 필요한 것과 대조적이다.
// 3. 속도 향상
//	  앞으로 엄청 큰 메모리를 가진 변수들을 사용할 것이다.
//	  100byte이상 되는 것들을 다룰 것인데 이들을 포인터로 정의하면 고작 4byte만으로 다룰 수 있다.
//	  호출을 할 때 마다 4byte만 다뤄도 전체 구조를 바꿀수 있으니 속도 향상에 크게 도움이 된다.