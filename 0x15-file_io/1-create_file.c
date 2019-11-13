#include "holberton.h"
/**
 * create_file - Create file
 * @filename: Pointer to filename
 * @text_content: content
 * Return: 1 if it works
 *
*/
int create_file(const char *filename, char *text_content)
{
	int fd, cnt = 0, writer = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[cnt])
			cnt++;
		writer = write(fd, text_content, cnt);
		if (writer == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

