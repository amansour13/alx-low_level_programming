#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char to standard output
 *
 * Return: the value of the char (1).
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
