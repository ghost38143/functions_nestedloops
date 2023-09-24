#include <stdio.h>
/**
 * main - printing an inverted triangle
 * Return: void
 */
int main(void)
{
	int i, j;
	int n = 5;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i;j++)
		{
			putchar ('#');
		}
		putchar ('\n');
	}
	return (0);
}
