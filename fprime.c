#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;

	i = 2;
	if (ac == 2)
	{
		int number;
		number = atoi(av[1]);
		if (number == 1)
			printf("1");
		while (number >= i)
		{
			if (number % i == 0)
			{
				printf("%d", i);
				if (number != i)
					printf("*");
				number /= i;
				i--;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
