#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5){
		printf("Last digit of %d is %d and is greater than 5", n, digit);
	}
	else if (digit == 0){
		printf("Last digit of %d is %d and is %d", n, digit, digit);
	}
	else if (digit < 6 && digit != 0){
		printf("Last digit of %d is less than 6 and not 0", n, digit);

	return (0);
}
