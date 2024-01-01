#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Prints all possible combinations of two two-digit numbers,
 *in ascending order, separated by a comma followed by a space.
 *followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n01;
	int n02;
	int n11;
	int n12;

	/* your code goes there */
	for (n01 = 48; n01 < 58; n01++)
	{
		for (n02 = 48; n02 < 58; n02++)
		{

			/*
			 *if (n02 == n01)
			 *continue;
			 */

			for (n11 = 48; n11 < 58; n11++)
			{
				for (n12 = 48; n12 < 58; n12++)
				{

					/*
					 *if (n12 == n11)
					 *continue;
					 */

					putchar(n01);
					putchar(n02);
					putchar(' ');
					putchar(n11);
					putchar(n12);
					if (n01 == 57 && n02 ==  56 && n11 == 57 && n12 == 57)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
