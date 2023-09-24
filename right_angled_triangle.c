#include <stdio.h>
/**
 * main - printing a right angled triangle
 * Return: void
 */
int main(void)
{
	int i, j, n, k;
	n = 5;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n - i; j++)/*invert the spaces formula to divert the # : you struggled remember haha*/
		{
			putchar (' ');
		}
		for (k = 0; k < i; k++)
		{
			putchar (35);
		}
		putchar ('\n');
	}
	return (0);
}
