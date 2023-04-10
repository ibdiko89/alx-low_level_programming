#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int xff, xft, xr, xw;
	char buffer[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	xff = open(argv[1], O_RDONLY);
	if (xff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	xft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (xft == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	while ((xr = read(xff, buffer, 1024)) != 0)
	{
		if (xr == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		xw = write(xft, buffer, xr);
		if (xw == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}

	if (close(xff) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", xff), exit(100);
	}

	if (close(xft) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", xft), exit(100);
	}
	return (0);
}
