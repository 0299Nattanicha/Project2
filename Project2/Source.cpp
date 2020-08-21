#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	if (a >= 0)
	{
		if (a < 50)
		{
			printf("Fail");
		}
		else
		{
			printf("Pass");
		}
	}
	else
	{
		printf("Please insert the number that is greater or equal zero");
	}
	return 0;
}