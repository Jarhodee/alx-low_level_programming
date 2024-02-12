#include "main.h"
/**
 *  create_file - a function that creates a file
 *  @filename: name of the file created
 *  @text_content: null terminated string to write to the file
 *  Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fx, bytes_written;

	fx = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fx == -1 || filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fx, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fx);
			return (-1);
		}
	}
	close(fx);
	return (1);
}