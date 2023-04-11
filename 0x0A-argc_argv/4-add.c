#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of positive numbers
 *@argc: number of arguements passed
 *@argv: an array of arguements passed
 *Return: always returns 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
