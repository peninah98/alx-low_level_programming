#include "main.h"
#include <stdio.h>

/**
 * isupper - return 1 if letter is upper case.
 *
 *@c:print int
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
	return (c >= 'A' && c <= 'Z');
}
