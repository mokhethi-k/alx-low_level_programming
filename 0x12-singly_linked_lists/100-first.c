#include <stdio.h>

/**
 *intro - prints before main executes
 *Return: returns nothing
 */

void __attribute__((constructor)) intro()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
