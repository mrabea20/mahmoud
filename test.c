#include <stdlib.h>

int ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int		*ft_range(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (ft_abs(end - start) + 1));
	while (start < end)
	{
		tab[i] = start;
		i++;
		start++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return(tab);
}