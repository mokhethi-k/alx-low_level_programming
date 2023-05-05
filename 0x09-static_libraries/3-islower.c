#include "main.h"
/**
 * _islower - Checks if the currecter is lower case
 *@c: Character to be checked
 * Return: Returns 1 for lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
