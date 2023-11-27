#include "main.h"

/**
 * append_text_to_file - append
 *
 * @filename: the name
 * @text_content: content
 *
 * Return: value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k;

	j = 0;
	if (!filename)
	{
		return (-1);
	}
	i = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		for (; text_content[j]; j++)
			;
		k = write(i, text_content, j);
		if (k == -1)
		{
			return (-1);
		}
	}
	close(i);
	return (1);
}
