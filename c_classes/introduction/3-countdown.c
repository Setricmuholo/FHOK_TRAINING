/**
 * this programs counts 1-10 backwards
 * use printf
 * return 0
 */
#include <stdio.h>

int main(void) {
	int number;
	int count;

	for (number = 10; number >= 0; number--)
	{
		count = number;
		printf("%d\n", count);
	}
	return 0;
}
