#include "main.h"

/**
 * helper_prime - detects if an input number is a prime number.
 * @n: input number.
 * @a: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int helper_prime(unsigned int n, unsigned int a)

{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}
	return (0 + helper_prime(n, a + 1));

}

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int n)

{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (helper_prime(n, 2));

}
