#include "main.h"

/**
  *sqrt_recurs_helper - checks if sqrt of number exists
  *@n: number.
  *@guess: the starting point of the search range.
  *
  *Return: sqrt of number ot -1 for error.
  */

int sqrt_recurs_helper(int n, int guess)
{
	int mid;

	mid = guess * guess;

	if (mid == n)
		return (guess);

	else if (mid > n)
		return (-1);

	else
		return (sqrt_recurs_helper(n, guess + 1));
}

/**
  *_sqrt_recursion - returns the natural square root of a number.
  *@n: number to find sqrt of.
  *
  *Return: squareroot of n.
  *-1 if n does not have a natural sqrt.
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_recurs_helper(n, 0));
}
