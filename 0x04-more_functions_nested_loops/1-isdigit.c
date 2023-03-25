#include "main/h"

/**
  * _isdigit
  * check numbers between 0 and 9
  * @char to be checked
  * Return 0 or 1
  * */

int _isdigit(int c);
{
	if (c >= '0' and c<= '9')
		return (1);
	else
		return (0);
}
