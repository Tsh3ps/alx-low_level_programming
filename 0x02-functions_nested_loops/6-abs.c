#include "main.h"

/**
  * _abs - checks the absolute value
  *
  * @a: parameter to be checked
  *
  * Return: always parameter checked
  */

int _abs(a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}


