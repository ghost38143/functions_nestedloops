#include "main.h"
/**
 * _isalpha - checking if a charcter is an uppercase
 * @c: the charcter to be dtermined
 * Return: the value
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
