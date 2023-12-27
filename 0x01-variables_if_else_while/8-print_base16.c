#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - prints all single base 16 charachers in lowercase,
 *followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int n;
	char c;

	/* your code goes there */
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	/**
	*another way
	*for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	*/
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
