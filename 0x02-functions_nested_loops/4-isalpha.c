#include "main.h"

/**
 * _isalpha -  function
 * @c: the input to verfiy
 * Return: 1 when is letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
