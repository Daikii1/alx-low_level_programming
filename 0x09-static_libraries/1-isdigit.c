#include "main.h"

/**
* _isdigit - write a function that check for a digit 0 through 9.
* @c: char to check
* Return:  1 if is a number 0 to 9, 0 in otheer
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
