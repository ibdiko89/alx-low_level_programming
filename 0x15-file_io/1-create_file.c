#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file created
 * @text_content: string to write to the file
 * name:ibrahim
 * Return: 1 on Success or -1 upon failure
 */

int create_file(const char *filename, char *text_content)
{
	int xfiled, i, w;

	if (filename == NULL)
	{
		return (-1);
	}

	xfiled = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (xfiled == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (i = 0; text_content[i] != 0; i++)
		;

	w = write(xfiled, text_content, i);

	if (w == -1)
	{
		return (-1);
	}

	close(xfiled);
	return (1);
}
