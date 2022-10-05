#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: paramater for string 1
 * @s2: parameter for string 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)

{

	char *my_array;
	unsigned int i, a, b, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (a = 0; s2[a] != '\0'; a++)
		;
	my_array = malloc(sizeof(char) * (i + a + 1));
	if (my_array == NULL)
	{
		free(my_array);
		return (NULL);
	}
	for (b = 0; b < i; b++)
		my_array[b] = s1[b];
	c = a;
	for (a = 0; a <= limit; b++, a++)
		my_array[b] = s2[a];
	return (my_array);
}
