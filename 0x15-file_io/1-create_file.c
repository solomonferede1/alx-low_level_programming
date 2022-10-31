#include "main.h"
/**
  * create_file - creates file
  * @filename: name of the file to create
  *@text_content: is a NULL terminated string to write to the file
  * Return: 1 on sucess, 0 otherwise
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC, 600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	w = write(fd, text_content, strlen(text_content));
	if (w < 0)
		return (-1);
	close(fd);
	return (1);
}
