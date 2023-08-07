#include "main.h"


/**
 * read_textfile- Read text file print to STDOUT.....
 * @filename: text file being read....
 * @letters: number of letters to be read...
 * Return: w- actual number of bytes read and printed...
 *        0 when function fails or filename is NULL....
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf_name;
	ssize_t folder_fd;
	ssize_t w;
	ssize_t t;

	folder_fd = open(filename, O_RDONLY);
	if (folder_fd == -1)
		return (0);
	buf_name = malloc(sizeof(char) * letters);
	t = read(folder_fd, buf_name, letters);
	w = write(STDOUT_FILENO, buf_name, t);

	free(buf_name);
	close(folder_fd);
	return (w);
}
