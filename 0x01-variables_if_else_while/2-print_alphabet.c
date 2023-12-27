#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - prints the alphabet in lowercase, followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* your code goes there */
	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
