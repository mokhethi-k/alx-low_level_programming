#include "main.h"
int prime_calc(int x, int y);

/**
 *is_prime_number - checks for prime numbers
 *@n: number to be checked
 *Return: returns 1 if number is a prime number otherwise returns 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_calc(n, n - 1));
}

/**
 *prime_calc - calculates prime numbers
 *@x: number to be checked
 *@y: times a function should be called
 *Return: returns 0 on prime and 0 orherwise
 */

int prime_calc(int x, int y)
{
	if (y == 1)
		return (1);
	else if (x % y == 0 && y > 0)
		return (0);
	else
		return(prime_calc(x, y - 1));
}
	       
