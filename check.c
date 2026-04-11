#include "push_swap.h"

int	ft_check_is_in_order(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*comp;
	
	tmp = *stack_a;
	comp = tmp->next;	
	while (comp)
	{
		if(tmp->value > comp->value)
		{
			write(1, "Il faut trier\n", 14);
			return (1);
		}
		tmp = tmp->next;
		comp = comp->next;
	}
	write(1, "OK - Pas besoin de trier\n", 25);
	return (0);
}

