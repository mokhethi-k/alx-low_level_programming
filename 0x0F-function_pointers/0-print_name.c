#include "function_pointers"

/**
 *print_name - prints the name of the function
 *@name: name given to the function
 *@f: pointer to a function
 *Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
		return;
}
