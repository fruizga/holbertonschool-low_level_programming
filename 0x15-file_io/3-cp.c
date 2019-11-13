#include "holberton.h"
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
int
/**
*@argc: arguments counter
*@argv: array of arguments
*/
main(int argc, char *argv[])
{
    int inputFd, outputFd, openFlags;
    mode_t filePerms;
    ssize_t numRead;
    char buff[BUF_SIZE];

    if (argc != 3 )
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit (97);
    }
    inputFd = open(argv[1], O_RDONLY);
    if (inputFd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
        exit (98);
    }
    openFlags = O_CREAT | O_WRONLY | O_TRUNC;
    filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |
    S_IROTH | S_IWOTH;
    outputFd = open(argv[2], openFlags, filePerms);
    if (outputFd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
        exit (99);
    }
    while ((numRead = read(inputFd, buff, BUF_SIZE)) > 0)
    if (write(outputFd, buff, numRead) != numRead)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
        exit (99);
    }
    if (numRead == -1)
    
    {
       dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
        exit (99); 
    }
    if (close(inputFd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
        exit (100); 
    }
    if (close(outputFd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
        exit (100); 
    } 
}