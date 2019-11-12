#include "holberton.h"
#include <stdio.h>
/**
 *read_textfile - Function that read a file
 *@filename: pointer to file
 *@letters: size of text
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, lector, imprimidor;
	char *buff_de_mier;

	buff_de_mier = malloc(letters);
	if (buff_de_mier == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff_de_mier);
		return (-1);
	}

	lector =read(fd, buff_de_mier, letters);
	if (fd == -1)
	{
		free(buff_de_mier);
		return (-1);
	}
	imprimidor = write(STDOUT_FILENO, buff_de_mier, lector);
	if (fd == -1)
	{
		free(buff_de_mier);
		return (-1);
	}
	close(fd);	

	return (imprimidor);

}