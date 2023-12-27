#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - prints  all possible combinations of single-digit numbers,
 *followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int n;

	/* your code goes there */
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 58 - 1)
			continue;
		putchar(',');
		putchar(' ');
	}
	/**
	*another way
	*for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	*/
	putchar('\n');
	return (0);
}
