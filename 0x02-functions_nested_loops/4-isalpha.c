#include "main.h"

/**
 * _isalpha -  function that is virefy for letters
 * @c: character to check
 * Return: 1 when is alpha if its not is  0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
