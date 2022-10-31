#include "main.h"
/**
  * read_textfile - reads text file
  * @filename: name of the file to be read
  *@letters: number of letters it should be read and print
  * Return: number of letters it coud read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
		return (0);
	size = read(fd, buff, letters);
	write(1, buff, size);
	close(fd);
	return (size);
}
