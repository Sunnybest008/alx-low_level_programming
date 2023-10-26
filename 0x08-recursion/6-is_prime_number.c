#include "main.h"

/**
 * is_prime_number - Returns
 *1 if a number is prime, 0 otherwise
 * @n: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_number_recursive(n, 2));
}

/**
 * is_prime_number_recursive - Recursive helper
 * function to check for prime number
 * @n: The number to be checked
 * @divisor: The current divisor to check for divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number_recursive(int n, int divisor)
{
	if (divisor > n / 2)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_number_recursive(n, divisor + 1));
}
