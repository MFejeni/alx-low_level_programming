#include "main.h"

/**
 * append_text_to_file - appends given text to the file at the end
 * @filename: the name of the file
 * @text_content: text to be appended to the file
 * Return: -1 on failure, 1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filecheck, len, write_num;

	if (text_content == NULL  && filename != NULL)
		return (1);
	if (filename == NULL)
		return (-1);

	filecheck = open(filename, O_WRONLY | O_APPEND);
	if (filecheck == -1)
		return (-1);

	len = 0;
	while (text_content[len] != '\0')
		len++;

	write_num = write(filecheck, text_content, len);
	if (write_num == -1)
		return (-1);

	close(filecheck);
	return (1);
}
