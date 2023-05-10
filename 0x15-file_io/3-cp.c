#include "main.h"

/**
 * errors - print errors if they exist
 * @dest: file to copy to (paste)
 * @src: source file (to copy from)
 * @argv: arguments
 * void
 */
void errors(int dest, int src, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[0]);
		exit(99);
	}
}

/**
 * main - program that copies content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
	int dest, src, err, len, write_num;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errors(dest, src, argv);

	len = 1024;
	while (len == 1024)
	{
		len = read(src, buffer, 1024);
		if (len == -1)
			errors(-1, 0, argv);
		write_num = write(dest, buffer, len);
		if (write_num == -1)
			errors(0, -1, argv);
	}
	err = close(src);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	err = close(dest);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	return (0);
}
