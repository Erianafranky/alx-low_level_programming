#include "main.h"

/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @i: is the int that will use for the argument of the function
 * Return: 0
 */

int _isalpha(int i)

{

	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))

	{

		return (1);

	}

	else

	return (0);

}