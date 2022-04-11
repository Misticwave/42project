/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate_ls <mgranate_ls@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:29:59 by mgranate          #+#    #+#             */
/*   Updated: 2022/04/11 20:48:05 by mgranate_ls      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	op_ra(t_stack **stack_a)
{
	ft_rotate(stack_a);
	ft_printf("ra\n");
}

void	op_rb(t_stack **stack_b)
{
	ft_rotate(stack_b);
	ft_printf("rb\n");
}

void	op_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate2(stack_b);
	ft_printf("rr\n");
}

void	op_rra(t_stack **stack_a)
{
	ft_rotate2(stack_a);
	ft_printf("rra\n");
}

void	op_rrb(t_stack **stack_b)
{
	ft_rotate2(stack_b);
	ft_printf("rrb\n");
}
