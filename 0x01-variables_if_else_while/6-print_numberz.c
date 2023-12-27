#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - prints all single didgit numbers in base 10,
 *followed by a new line, using putchar and no char variable
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int n;

	/* your code goes there */
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
