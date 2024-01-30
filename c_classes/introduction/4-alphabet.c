/**
 * this program prints a-z backward
 * if letter h, j, g it should not print them but print hola
 * return 0
 */
#include <stdio.h>

int main(void) {
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'g' || alpha == 'h' || alpha == 'j')
		{
			printf("hola");
		}

		else
		{
			printf("%c", alpha);
		}
		printf("\n");
	}
	return 0;
}
