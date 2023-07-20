#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the op that will  given by the user
 *
 * Return: pointer to the functiion
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int cpt;

	cpt = 0;

	while (ops[cpt].op)
	{
		if (strcmp(ops[cpt].op, s) == 0)
			return (ops[cpt].f);
		cpt++;
	}

	return (NULL);
}
