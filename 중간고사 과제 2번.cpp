// 휴먼IT융합학부 로봇융합전공 20191422 정준혁 중간고사 대체 과제 2번.cpp
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double a, b, p, m, d, mu;

	printf("실수를 입력하시오:");
	scanf("%lf %lf",&a,&b);

	p = a + b;
	m = a - b;
	d = a / b;
	mu = a * b;
	printf("%lf  %lf  %lf  %lf", p, m, d, mu);
	
	return 0;
}