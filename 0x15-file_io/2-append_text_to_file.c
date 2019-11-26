#include "holberton.h"
/**
 * append_text_to_file - append text to a file
 * @filename: Pointer to filename
 * @text_content: content
 * Return: 1 if it works
 *
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, cnt = 0, writer = 0;

if (filename == NULL)
{
	return (-1);
}
fd = open(filename, O_APPEND | O_WRONLY);
if (fd == -1)
	return (-1);
if (text_content != NULL)
{
	while (text_content[cnt])
		cnt++;
	writer = write(fd, text_content, cnt);

}
if (writer == -1)
{
	return (-1);
}
close(fd);
return (1);
}