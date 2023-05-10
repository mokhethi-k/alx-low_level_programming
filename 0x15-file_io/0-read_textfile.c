#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - reads the file and prints it to the POSIX std output
 *@filename: pointer to a file to be read
 *@letters: number of letters to be read
 *Return: returns the number of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *store;
	ssize_t fl, bytes, written;

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	store = malloc(sizeof(char) * letters);
	bytes = read(fl, store, letters);
	written = write(STDOUT_FILENO, store, bytes);

	if (written == -1 || written != bytes)
		return (0);

	free(store);
	close(fl);
	return (written);    
}
