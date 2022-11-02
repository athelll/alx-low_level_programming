#include "main.h"

/**
  * read_textfile - reads a text file
  * @filename : name of file
  * @letters : number of characters
  * Return: returns the number of letters it could read and print.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t reader, writer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	reader = read(fd, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	writer = write(STDOUT_FILENO, buffer, reader);
	if (writer == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (reader);
}
