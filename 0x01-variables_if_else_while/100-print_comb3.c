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
	unsigned int n1;
	unsigned int n2;

	/* your code goes there */
	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');
			if (n1 == 8 && n2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
