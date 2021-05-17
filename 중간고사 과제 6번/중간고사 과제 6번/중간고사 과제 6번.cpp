// 휴먼IT융합학부 로봇융합전공 20191422 정준혁 중간고사 대체 과제 6번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	printf("정수를 입력하시오:");
	scanf("%d", &a);

	printf("2의 보수: %d", ~a + 1);
}