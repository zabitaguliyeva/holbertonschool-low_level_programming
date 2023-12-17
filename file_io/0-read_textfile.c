#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads textfile & prints
 * @filename: variable pointer
 * @letters: size letters
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, letters_read, letters_written;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	letters_read = read(file, text, letters);

	letters_written = write(STDOUT_FILENO, text, letters_read);

	close(file);

	return (letters_written);
}

