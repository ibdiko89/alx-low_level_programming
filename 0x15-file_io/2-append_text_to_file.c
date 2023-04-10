#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * name:ibrhaim
 * Return: 1 on success or -1 upon failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int xfiled, i;

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (i = 0; text_content[i] != 0; i++)
		;

	xfiled = open(filename, O_WRONLY | O_APPEND);

	if (xfiled == -1)
		return (-1);

	write(xfiled, text_content, i);

	close(xfiled);
	return (1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		if (filename != NULL)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
}
