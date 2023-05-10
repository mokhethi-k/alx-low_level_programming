#include "main.h"

/**
 *append_text_to_file - appends the text at the end of the file
 *@filename: the pointer to the file name created
 *@text_content: text to be appended
 *Return: retuns 1 on success otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, written, len = 0;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);

	while (text_content[len] != '\0')
		len++;
	written  = write(fl, text_content, len);

	if (fl == -1 || written == -1)
		return (-1);
	close(fl);
	return (1);

}
