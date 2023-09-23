#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - printing his every minute of his day
 * Return: nothing
 *
 */
void jack_bauer(void)
{
	int m;
	int n;

	for (m = 0; m < 24; m++)
	{
		for (n = 0; n < 60; n++)
		{
			_putchar ('0' + m / 10);
			_putchar ('0' + m % 10);
			_putchar (':');
			_putchar ('0' + n / 10);
			_putchar ('0' + n % 10);

			if (m == 23 && n == 59)
				continue;
			_putchar('\n');
		}
	}
	 printf("an hour %02d has passed.\n", m);
}
