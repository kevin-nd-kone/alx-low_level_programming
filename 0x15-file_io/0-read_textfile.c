#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

/**
 * read_textfile - function that read text file
 *
 * @filename: file name
 * @letters: current letter of text part
 * Return: number of letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file, r_ch, w_ch;
char *buffet;

if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buffet = malloc(sizeof(char) * letters);
if (buffet == NULL)
return (0);
r_ch = read(file, buffet, letters);
if (r_ch == -1)
return (0);
w_ch = write(STDOUT_FILENO, buffet, w_ch);
if (w_ch == -1)
return (0);
close(file);
free(buffet);
return (w_ch);
}
