#include "main.h"

/**
 * create_file - create
 *
 * @filename: the file name
 * @text_content: the text
 *
 * Return: value
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, k;

	j = 0;
	if (!filename)
	{
		return (-1);
	}
	i = open(filename,  O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
	{
		text_content = "";
	}
	for (; text_content[j]; j++)
		;
	k = write(i, text_content, j);
	if (k == -1)
	{
		return (-1);
	}
	close(i);
	return (1);
}
