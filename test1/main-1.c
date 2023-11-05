#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num, digit;
	int sum;
	char ch;

	sum = 0;
	if (argc == 1)
		printf("0");
    
	for (num = 1; num < argc; num++)
	{
		for (digit = 0; digit < argv[num][digit]; digit++)
		{
			if(argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[num]);
		}

	}

	printf("%d\n", sum);

	return (0);
}
