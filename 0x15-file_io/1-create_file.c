#include "main.h"

/**
 * create_file - creates a file with permisions rw------- if it doesnt exist
 * @filename: name of the file to be created
 * @text_content: content to be in the file
 * Return: -1 on failure, 1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int filechech, write_num, len;

	if (text_content == NULL)
		text_content = "";
	if (filename == NULL)
		return (-1);

	filecheck = open(filename, O_WRONLY | O_CREAT | O_TRUNC,0600);
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
