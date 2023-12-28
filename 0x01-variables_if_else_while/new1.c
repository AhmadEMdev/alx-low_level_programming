#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Prints all possible combinations of two different digits,
 *in ascending order, separated by a comma followed by a space.
 *followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;

	/* your code goes there */
	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = n1; n2 < 58; n2++)
		{
			if (n2 == n1)
				continue;
			putchar(n1);
			putchar(n2);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
