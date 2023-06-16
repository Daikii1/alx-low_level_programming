#include <stdlib.h>
/**
 * main - entry point
 * alphabet without the e and q in c proogramming
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lo = 'a';

	/*lower letters except q and e*/
	for (; lo <= 'z'; lo++)
	{
		if (lo != 'q' && lo != 'e')
		{
			putchar(lo);
		}
	}
	putchar('\n');
	return (0);
}
