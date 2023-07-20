#include "3-calc.h"

/**
 * main - apk that perfroms simple operations
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ar1, ar2, R;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && ar2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	R = func(ar1, ar2);

	printf("%d\n", R);

	return (0);
}
