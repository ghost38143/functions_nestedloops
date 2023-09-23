#include "main.h"
/**
 * print_alphabet_x10 - printing the lower case ten times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar (i);
			i++;
		}
		_putchar ('\n');
	}
	_putchar ('\n');
}
