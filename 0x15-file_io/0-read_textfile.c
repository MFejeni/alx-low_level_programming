#include "main.h"

/**
 * read_textfile - reads the textfile and prints it to POSIX stdio
 * @filename: the file to be read and printed to POSIX
 * @letters: number of letters the function should read and print to POSIX
 * Return: number of letters that are read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filecheck, read_num, write_num;
	char *buffer;

	if (filename == NULL)
		return (0);
	filecheck = open(filename, O_RDONLY);
	
	if (filecheck == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_num = read(filecheck, buffer, letters);
	write_num = write(STDOUT_FILENO, buffer, read_num);
	close(filecheck);
	free(buffer);
	return (write_num);
}
