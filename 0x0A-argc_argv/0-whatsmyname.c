#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 *@argc: number of arguements to the function
 *@argv: an array of arguements to the function
 *Return: always returnes 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
