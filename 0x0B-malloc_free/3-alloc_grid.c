#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid- allocate memory to 2 dimensional array
 *@width: the width of the array
 *@height: the height of the array
 *Return: returns pointer or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, **_2D;

	if (width <= 0 || height <= 0)
		return (NULL);
	_2D = malloc(sizeof(int *) * height);
	if (_2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		_2D[i] = malloc(sizeof(int) * width);
		if (_2D[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(_2D[j]);
			}
			free(_2D);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			_2D[i][j] = 0;
		}
	}
	return (_2D);
}
