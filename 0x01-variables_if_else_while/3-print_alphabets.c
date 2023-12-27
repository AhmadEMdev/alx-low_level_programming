#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - prints the alphabet in lowercase,then in uppercase,
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* your code goes there */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
