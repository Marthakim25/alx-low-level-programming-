#include "3-calc.h"

/**
 * get_op_func - function pointer that
 * select the correct function to perform
 * the operation by the user
 * @s: operator given by the user
 *
 * Return: pointer to the function that correspond to
 * the operator given by the parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};
	int k;

	k = 0;

	while (ops[k].op)
	{
		if (strcmp(ops[k].op, s) == 0)
			return (ops[k].f);
		k++;
	}

	return (NULL);
}
