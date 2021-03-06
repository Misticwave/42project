/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:35:01 by mgranate          #+#    #+#             */
/*   Updated: 2022/04/30 16:58:30 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	op_rrr(t_stk **stack_a, t_stk **stack_b)
{
	ft_rotate2(stack_b);
	ft_rotate2(stack_a);
	ft_printf("rrr\n");
}
