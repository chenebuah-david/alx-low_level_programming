#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: This will create a pointer to the name of the file.
 * @text_content: The pointer to a string in writing the file.
 *
 * Return: If the function is not successful -1.
 *         Otherwise return 1.
 */

int create_file(const char *filename, char *text_content)

{
	int a, b, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c = 0; text_content[len];)
			c++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, c);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
