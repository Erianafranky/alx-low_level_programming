#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)

{

	char *my_array;
	unsigned int i, k;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	my_array = (char *)malloc(sizeof(char) * (i + 1));
	if (my_array == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
		my_array[k] = str[k];
	return (my_array);
}
