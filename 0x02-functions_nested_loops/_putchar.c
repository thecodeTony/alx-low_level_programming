#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character d to stdout
 * @d: the character to print
 *
 * Return: On success 1
 */
int _putchar(char d)
{
	return (write(1, &d, 1));

}
