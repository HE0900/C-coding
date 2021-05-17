//Programming part Q 06
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int power(int base, int power_raised);
int main(void) {

	int base;
	
	int power_raised;
	
	printf("밑수 : ");
	scanf("%d", &base);
	
	printf("지수 : ");
	scanf("%d", &power_raised);	
	
	printf("%d^%d = %d", base, power_raised, power(base, power_raised));
	
	
	return 0;
}


int power(int base, int power_raised) {

	int res = base;

	for (int a = 1; a < power_raised; a++) {
		res *= base;
	}

	return res;
}