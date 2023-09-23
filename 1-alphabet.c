#include "main.h"
/**
 * print_alphabet - printing the alphabet in lowcase
 * Return: nothing
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
