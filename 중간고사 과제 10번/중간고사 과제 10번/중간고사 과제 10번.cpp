// 중간고사 과제 10번.cpp : This file contains the 'main' function. Program execution begins and ends there.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y;
	printf("X좌표를 입력하시오:");
	scanf("%d", &x);

	printf("Y좌표를 입력하시오:");
	scanf("%d", &y);

	printf("%d사분면", (x > 0) && (y > 0) ? 1 : (x < 0) && (y > 0) ? 2 : (x < 0) && (y < 0) ? 3 : 4);
}