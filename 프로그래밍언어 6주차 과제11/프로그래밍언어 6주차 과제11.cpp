//Programming part Q 11

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

int rec(int n, int k)
{
	if (k == 0 || n == k) {
		return 1;
	}
	else {

		return rec(n - 1, k - 1) + rec(n - 1, k);

	}
}

int main(void)
{
	int k;
	int n;

	printf("n = ");

	scanf("%d", &n);

	printf("k = ");

	scanf("%d", &k);

	printf("%d\n", rec(n, k));

	return 0;
}

