#include <stdio.h>
/**
 * main - printing numbers in a fibonacci format
 * Return: always 0 success
 */
int main(void)
{
	int i;
	long int k = 1, j = 0;

	for (i = 0; i <= 50; ++i)
	{
		k = k + j;
		j = k - j; /*updating j*/
		printf("%ld, ", k);
	}
	printf("\n");
}
