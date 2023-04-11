#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguements passed to the function
 *@argc: number of arguements passed
 *@argv: an array of arguements passed
 *Return: always returns 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc >= 1)
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
