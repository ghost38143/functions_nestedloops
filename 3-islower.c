#include "main.h"
/**
 * _islower - checking if a value is lowercse charcter
 * @c: the chacter to be determined
 * Return: value
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
