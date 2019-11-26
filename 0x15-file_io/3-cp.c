#include "holberton.h"
#include <stdio.h>
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

/**
 * main - main function
*@argc: arguments counter
*@argv: array of arguments
*Return: zero
*/
int main(int argc, char *argv[])
{
int inputFd, outputFd, openFlags;
ssize_t numRead;
char *buff[BUF_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
inputFd = open(argv[1], O_RDONLY);
if (inputFd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
openFlags = O_CREAT | O_WRONLY | O_TRUNC;
outputFd = open(argv[2], openFlags, 0664);
if (outputFd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
exit(99);
}
while ((numRead = read(inputFd, buff, BUF_SIZE)) > 0)
{
if (write(outputFd, buff, numRead) != numRead)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
exit(99);
}
}
if (numRead == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (numRead == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
exit(99);
}
return (0);
}
