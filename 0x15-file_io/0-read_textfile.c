#include "main.h"
/**
  * read_textfile - reads text file
  * @filename: name of the file to be read
  *@letters: number of letters it should be read and print
  * Return: number of letters it coud read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, w;
	ssize_t size;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
		return (0);
	size = read(fd, buff, letters);
	if (size < 0)
	{
		free(buff);
		return (0);
	}
	buff[size] = '\0';
	close(fd);
	w = write(1, buff, size);
	if (w < 0)
	{
		free(buff);
		return (0);
	}
	return (w);
}
