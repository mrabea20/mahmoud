#include <stdlib.h>
#include <stdio.h>

int nbrlen(int nbr)
{
    int i;
    
    i = 1;
    if (nbr < 0)
    {
        i++;
        nbr *= -1;
    }
    while (nbr > 9)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

int ft_div(int  len)
{
    int i;
    i = 1;
    if (len == 1)
        return (1);
    while (len > 1)
    {
        i *= 10;
        len--;
    }
    return(i);
}

char *ft_itoa(int nbr)
{
    int i;
    int len;
    int len2;
    char *result;

    i = 0;
    len = nbrlen(nbr);
    len2 = len;

    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    if (nbr == -2147483648)
        return("-2147483648\0");
    if (nbr < 0)
    {
        result[0] = '-';
        nbr *= -1;
        len--;
        i++;
    }
    while (i <len2)
    {
        result[i] = ((nbr / ft_div(len)) %10) +'0';
        i++;
        len--;
    }
    result[i] ='\0';
    return (result);
}

int main()
{
    int i;
    i = 5005;
    printf("%s\n", ft_itoa(i));
    return (0); 
}