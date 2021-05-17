// 종합계산ㄱ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	double usd;
	double kw;
	double re;
	int w;
	int h;
	int a;
	int per;
	int bu;
	int nod;

	printf("종합계산기 입니다. 환율계산기는 1번, 사각형의 둘레 계산은 2번, 사각형의 부피 계산은 3번, 사각형의 면적계산은 4번을 입력해주세요\n");
	scanf("%d", &x);

	if (x == 1)
	{
		printf("환율계산기입니다. 현재 환율을 입력해주세요.");
		scanf("%lf", &usd);
		
		printf("원화 금액을 입력해주세요.");
		scanf("%lf", &kw);

		re = kw / usd;

		printf("원화 %lf원은 %lf달러입니다.\n", kw, usd);
	}




	
	
	else if(x == 2)
	{
    printf("사각형의 둘레계산기입니다.");
	printf("사각형의 가로길이를 입력하세요.");
	scanf("%d", &w);

	printf("사각형의 세로길이를 입력하세요.");
	scanf("%d", &h);

	a = w * h;

	printf("사각형의 둘레:%d\n", a);
	}




	else if(x == 3)
	{
	printf("부피계산기입니다. 육면체의 가로길이를 입력하세요.");
	scanf("%d", &w);

	printf("육면체의 세로길이를 입력하세요.");
	scanf("%d", &h);

	printf("육면체의 높이를 입력하세요.");
	scanf("%d", &nod);

	bu = nod * w * h;

	printf("사각형의 부피:%d\n", bu);
	}


	
	else if(x == 4)
	{
	printf("사각형의 면적계산입니다.");

	printf("사각형의 가로길이를 입력하세요.");
	scanf("%d", &w);

	printf("사각형의 세로길이를 입력하세요.");
	scanf("%d", &h);
	per = 2 * (w + h);

	printf("사각형의 면적은 %d입니다.\n", per);
	return 0;
	}




}

