#include "main.h"

/**
 * sqrt_checker - Helper function to
 * recursively check for square root
 * @n: The number for which square root is to be checked
 * @guess: The current guess for square root
 *
 * Return: The natural square root of n, or -1 if not found
 */
int sqrt_checker(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}

	return (sqrt_checker(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square
 * root of a number using recursion
 * @n: The number for which square root is to be calculated
 *
 * Return: The natural square root of n, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_checker(n, 0));
}
