#include "main.h"

/**
 * read_textfile - read the text
 *
 * @filename: the filename
 * @letters: number
 *
 * Return: value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t l;
	ssize_t m;
	char *c;

	if (!filename)
	{
		return (0);
	}
	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (0);
	}
	c = malloc(sizeof(char) * (letters));
	if (!c)
	{
		return (0);
	}
	l = read(i, c, letters);
	m = write(STDOUT_FILENO, c, l);
	close(i);
	free(c);
	return (m);
}
