#include <stdio.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: argc principal
 * @argv: argv char
 * Return: 0
  */
int main(int argc, const *argv[])
{

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%')
		&& argv[2][1] == '\n' && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(atoi(argv[1]), atoi(argv[3])) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
