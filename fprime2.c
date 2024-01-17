#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;
    int nbr;

    i = 2;
    nbr = atoi(av[1]);

    if(ac == 2)
    {
        if (nbr == 1)
        {
            printf("1\n");
            return(0);
        }
        while (nbr >= i)
        {
            if (nbr % i == 0)
            {
                printf("%d", i);
                if (nbr != i)
                {
                    printf("*");
                }
                nbr /= i;
                i--;
            }
            i++;
        }
    }
    printf("\n");
    return (0);
}