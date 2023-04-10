#include "main.h"
/**
 * read_textfile - this function reads a text fiole and prints it to the POSIX
 * @filename: name of the file
 * @letters: number of letters
 *name :ibrahim
 * Return: the number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int xfile, r, w;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	/* OPEN */
	xfile = open(filename, O_RDONLY);

	if (xfile == -1)
	{
		return (0);
	}

	/* READ */
	r = read(xfile, buffer, letters);

	if (r == -1)
	{
		return (0);
	}

	/* WRITE */
	w = write(STDOUT_FILENO, buffer, r);

	if (w == -1)
	{
		return (0);
	}

	close(xfile);

	return (w);
}
