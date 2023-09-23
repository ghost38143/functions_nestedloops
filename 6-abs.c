#include "main.h"
/**
 * _abs - returning the absolute value of an integer
 * @n: the value to be determined
 * Return: value
 */
int _abs(int n)
{
	int abs_val;

	if (n < 0)
	{
		abs_val = n * -1;
		return (abs_val);
	}
	else
	{
		return (n);
	}
}
