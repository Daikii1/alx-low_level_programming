#include "main.h"
/**
 * _islower - its a function to Verify the character is he lowercase
 * @c: input of the fucnition in ascii
 * Return: return 1 for lowercase and 0 if its not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
