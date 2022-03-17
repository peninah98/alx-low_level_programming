#include "main.h"
/**
 *_isdigit - checks for a digit
 *
 *Description:0 through 9
 *
 *@c:input
 *
 *Return:1 - digit 0 - otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

