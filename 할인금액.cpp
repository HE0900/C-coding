#include<stdio.h>

int main()
{
	short year = 0;
	int sale = 0;
	long total_sale = 0;
	long long large_value;

	year = 10;
	sale = 2000;
	total_sale = year * sale;
	printf("total_sale= %d\n", total_sale);

	return 0;

}