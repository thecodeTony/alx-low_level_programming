#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: the characte to print
 * Returns: on success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
