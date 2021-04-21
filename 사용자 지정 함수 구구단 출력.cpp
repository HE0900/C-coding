// 로봇프로그래밍언어 12주차 과제2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(default:4716)
int x, y, re;
void multi_1()
{
	re = y * x;
}
void sign_1()
{
	for (int a = 0; a<1; a++)
	printf("------");
}
int main()
{
	sign_1();
	printf("구구단을 출력하는 프로그램입니다.");
	sign_1();
	printf("\n어떤 구구단을 출력할까요 ? \n>> ");
	scanf("%d", &y);

	while (x < 10)
	{
		multi_1;

	    printf("%d * %d = %d\n", y, x, x*y);
		x++;
	}
}
