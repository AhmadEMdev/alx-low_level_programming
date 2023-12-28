#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Prints all possible combinations of three different digits,
 *in ascending order, separated by a comma followed by a space.
 *followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	/* your code goes there */
	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = n1; n2 < 58; n2++)
		{
			if (n2 == n1)
				continue;
			for (n3 = n2; n3 < 58; n3++)
			{
				if (n3 == n2)
					continue;
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 == 55 && n2 ==  56 && n3 == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
