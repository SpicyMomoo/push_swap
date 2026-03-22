
#include "push_swap.h"

int	ft_isvalid(int ac,char **ag)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (*ag[i] == '+' || *ag[i] == '-')
			i++;
		if (*ag[i] < '0' ||  *ag[i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
 		i++;
	}
	write(1, "OK\n", 3);
	return (1);
}

int	main(int ac, char **ag)
{
	if (ac < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_isvalid(ac, ag);
	return (0);
}


