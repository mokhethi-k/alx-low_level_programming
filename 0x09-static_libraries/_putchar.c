#include <unistd.h>
/**
 * _putchar - writes c to stdout
 * @c: writing to stdout using _putchar
 * Return: it returns 0 on success
 *On error, -1 is returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
