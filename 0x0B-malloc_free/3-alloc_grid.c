#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: is the width
 * @height: is the height
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0) /* Verificar si son nulos */
		return (NULL);

	ptr = malloc(height * sizeof(int)); /* obtenemos el valor de malloc */
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (i--; i < width; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
