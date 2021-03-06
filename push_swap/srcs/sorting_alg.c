/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_alg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anne-sophie <anne-sophie@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:59:45 by mgranate          #+#    #+#             */
/*   Updated: 2022/04/26 09:29:24 by anne-sophie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	help_organize2(int i, t_stk **stack_a, t_stk **stack_b)
{
	if (i > (get_size_stack(*stack_b) / 2))
	{
		while (i < get_size_stack(*stack_b))
		{
			op_rrb(stack_b);
			i++;
		}
		op_pa(stack_b, stack_a);
	}
	else
	{
		while (i > 0)
		{
			op_rb(stack_b);
			i--;
		}
		op_pa(stack_b, stack_a);
	}
}

void	organize_any_element2(t_stk **stack_a, t_stk **stack_b, int *arr, int j)
{
	t_stk	*tmp;
	int		i;

	tmp = (*stack_b);
	i = 0;
	while (tmp)
	{
		if (tmp->num == arr[j])
		{
			help_organize2(i, stack_a, stack_b);
			i = 0;
		}
		if ((*stack_b)->next->next == NULL)
		{
			op_pa(stack_b, stack_a);
			op_pa(stack_b, stack_a);
			if ((*stack_a)->num > (*stack_a)->next->num)
				op_sa(stack_a);
			break ;
		}
		i++;
		tmp = tmp->next;
	}	
}
