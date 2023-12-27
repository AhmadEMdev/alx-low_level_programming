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
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % (-10);
	printf("Last digit of %d is %d ", n, r);
	if (r > 5)
		printf("and is greater than 5\n");
	else if (r == 0)
		printf("and is 0\n");
	else if (r < 6 && r != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
