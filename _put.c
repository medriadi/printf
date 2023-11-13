#include "main.h"

/**
 * _puts - Prints a string followed by a newline
 * @str: The string to print
 *
 * Return: Length of the string
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);

	return (str - a);
}

/**
 * _putchar - Writes a character to stdout or flushes the buffer
 * @c: The character to print or BUF_FLUSH to flush the buffer
 *
 * Return: On success, returns 1. On error, -1 is returned.
 */
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}

	if (c != BUF_FLUSH)
		buf[i++] = c;

	return (1);
}
