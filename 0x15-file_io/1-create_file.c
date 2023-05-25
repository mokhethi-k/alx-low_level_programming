#include "main.h"
/**
 *create_file - creates a file
 *@filename: pointer to the file to create
 *@text_content: A text to add to a file
 *Return: returns 1 on success otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fl, written, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len] != '\0')
		len++;
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	written  = write(fl, text_content, len);

	if (fl == -1 || written == -1)
		return (-1);
	close(fl);
	return (1);
}
