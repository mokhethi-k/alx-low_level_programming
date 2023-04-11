#include "main.h"
#include <stdio.h>
/**
 * main - prints all the of arguements passed to the function
 *@argc: number of arguements passed
 *@argv: an array of arguements passed
 *Return: always returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
