#include<stdio.h>
#include<stdlib.h>

/**
 * main- Entry point
 * 
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa)?
* Return: 0 in succes
*/
int main(int argc, char *argv[])
{
	int index = 0, number;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (; index < number; index++)
	{
		printf("%02hhx", *((char *)main + index));
		if (index < number - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
