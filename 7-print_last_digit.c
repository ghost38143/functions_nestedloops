#include "main.h"
/**
 * print_last_digit - printing the last digit of anumber
 * @n: the value to print out
 * Return: value
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar (last_digit + '0');

	return (last_digit);
}


