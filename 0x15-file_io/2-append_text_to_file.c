#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strileng - length of a string
 * @stri: pointer to string
 *
 * Return: length of string
 */

size_t _strileng(char *stri)
{
	size_t i;

	for (i = 0; stri[i]; i++)
		;
	return (i);
}

/**
 * apend_txt_2_fil - Appends text at the end of a file.
 * @filnam: A pointer to the name of the file.
 * @txt_cont: The string to add to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL
 *         -1 If the file does not exist the user lacks write permissions
 *         Else 1.
 */

int apend_txt_2_fil(const char *filnam, char *txt_cont)
{
	int fd;
	ssize_t len;

	if (filnam == NULL)
		return (-1);
	fd = open(filnam, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (txt_cont != NULL)
		len = write(fd, txt_cont, _strileng(txt_cont));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}

