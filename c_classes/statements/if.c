/**
 * in this file i learnt about how to apply
 * C statements
 */
#include <stdio.h>

int main(void)
{
	/**int i = 5;
	int j = 10;

	if (i <= j)
		printf("Five is less then Ten, thats a big suprise\n");*/
	int a, b;

	printf("type your first number: ");
	scanf("%d", &a);
	printf("type you second number: ");
	scanf("%d", &b);

	if (a < b)
	{
		printf("everything is possible\n");
	}
	else if (a > b)
	{
		printf("you have won\n");
	}
	else
		printf("they are equal\n");

	return 0;
}
