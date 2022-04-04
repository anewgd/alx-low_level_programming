#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array and initialize it
 * @size: the size of the array
 * @c: the first character of the array
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array_ptr;

	if (size == 0)
		return (NULL);
	array_ptr = malloc(sizeof(char) * size);
	if (array_ptr == NULL)
		return (NULL);
	array_ptr[0] = c;
	return (array_ptr);
}
