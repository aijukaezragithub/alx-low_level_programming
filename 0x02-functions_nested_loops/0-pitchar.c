#include "main.h"
#include <unistd.h>

/**
 * 0-putchar -writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 */
int 0-putchar(char c)
{
	return (write(1, &c, 1));
}	
