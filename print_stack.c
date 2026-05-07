void	ft_print_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (!tmp->target_node)
			printf("value : %d, cost : %d\n", tmp->value, tmp->cost);
		else
			printf("value : %d, cost : %d, target : %d\n", tmp->value, tmp->cost, tmp->target_node->value);
		tmp = tmp->next;
	}
}

void	ft_print_stack_b(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		printf("value : %d, cost : %d\n", tmp->value, tmp->cost);
		tmp = tmp->next;
	}
}


