#include "main.h"
#include <unistd.h>

/**
  *
  * _putchar - write the character stdout
  * @c: character to print
  *
  * Return: on success 1
  * On error, -1 is returned and errno is set appripriately
  */

int putchar(char c)
{
	return (write (1, &c, 1));
}
