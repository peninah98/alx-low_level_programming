#include <stdio.h>

/**
 * _putchar - write the character c to stdout 
 *@c: the character to print 
 *
 * Return:on success 1
 *On error-1 returned and errno is set approprietely
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
