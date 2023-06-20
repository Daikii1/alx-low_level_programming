#include "main.h"
/**
 * _isalpha - its a function to Verify the character is he lower or upper
 * @c: input of the fucnition in ascii
 * Return: return 1 for c else null
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
