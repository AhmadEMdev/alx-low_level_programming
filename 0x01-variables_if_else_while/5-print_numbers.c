#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - prints all single didgit numbers in base 10,
 *followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int n;

	/* your code goes there */
	for (n = 0; n < 10; n++)
	{
		printf("%u", n);
	}
	putchar('\n');
	return (0);
}
