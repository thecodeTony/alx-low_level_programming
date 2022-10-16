#include <stdio.h>

/**
 * main - prints alpha in lowercase, except q and e and on a new line
 * Return: Always 0
 */
int main(void)
{
	char lp;

	for (lp = "a"; lp <= "z"; lp++)
	{
		if (lp != "e" && lp != "q")
			putchar(lp);
	}

	putchar("\n");

	return (0);
}
