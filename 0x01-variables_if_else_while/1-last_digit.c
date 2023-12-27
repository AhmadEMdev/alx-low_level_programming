#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - assign a random no and checks if the last digit
 *is gretaer than 5, equal to zero or between 0 and 6
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
		printf("The Last digit of %u and is greater than 5\n", n);
	else if (n % 10 == 0)
		printf("The Last digit of %u and is 0\n", n);
	else if (n % 10 < 6 && n % 10 != 0)
		printf("The Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}
