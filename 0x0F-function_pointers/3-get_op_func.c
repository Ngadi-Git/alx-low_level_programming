#include "3-calc.h"

/**
  *get_op_func - Selects the correct function.
  *@s: operator used.
  *
  *Return: correct function result or NULL if operator is wrong.
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
	int indx;

	indx = 0;
	while (indx < 5)
	{
		if (s[0] == ops[indx].op[0])
		{
			return (ops[indx].f);
		}
		indx++;
	}
	return (NULL);
}
