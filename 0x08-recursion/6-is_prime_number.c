#include "main.h"

/**
 *is_divisible - checks if given number is divisible
 *@n: the number being checked.
 @divisor: possible factor of the number.
 *
 *Return: 0 if n is not prime
 *	  1 if n is a prime number
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);
	else if (divisor * divisor > n)
		return (0);
	else if (n % divisor == 0)
		return (1);
	else
		return (is_divisible(n, divisor + 1));
}

/**
 *is_prime_number - checks if number is prime or not.
 *@n: number to be checked.
 *
 *Return: 1 if n is prime.
 *0 if n is not prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (!is_divisible(n, 2));
}
