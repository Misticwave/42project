/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:16:14 by mgranate          #+#    #+#             */
/*   Updated: 2022/05/15 14:33:11 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void	printlist(t_stk *n, char *list)
// {
// 	ft_printf("\n=======%s=======\n", list);
// 	while (n)
// 	{
// 		ft_printf("%d ", n->num);
// 		n = n->next;
// 	}
// 	ft_printf("\n===============\n");
// }

static t_stk	*create_new_node(int value)
{
	t_stk	*s;

	s = (t_stk *)malloc(sizeof(t_stk));
	if (!s)
		return (0);
	s->num = value;
	s->next = NULL;
	return (s);
}

static void	clean_split(char **split)
{
	int	i;

	i = -1;
	if (split)
	{
		while (split[++i])
			free(split[i]);
		free(split);
	}
}

void	clean_stack(t_stk	**s)
{
	t_stk	*tmp;

	if (*s)
	{
		while (*s)
		{
			tmp = (*s)->next;
			free(*s);
			*s = NULL;
			(*s) = tmp;
		}
		free(*s);
		*s = NULL;
	}
}

static t_stk
	*add_elements_to_list2(char **split, t_stk *head, t_stk *stack)
{
	int	j;

	j = 0;
	while (split[j])
	{
		if (is_valid_arg(split[j]))
		{
			stack = create_new_node(ft_atoi(split[j++]));
			stack->next = head;
			head = stack;
		}
		else
		{
			ft_printf("Error\n");
			clean_stack(&head);
			return (0);
		}
	}
	return (head);
}

t_stk	*add_elements_to_list(int ac, char **av)
{
	t_stk	*stack;
	char	**split;
	t_stk	*head;

	stack = NULL;
	head = NULL;
	while (--ac > 0)
	{
		split = ft_split(av[ac], ' ');
		head = add_elements_to_list2(split, head, stack);
		if (head == NULL)
			return (0);
		if (split)
			clean_split(split);
	}
	if (has_duplicates(head))
	{
		ft_printf("Error\n");
		clean_stack(&head);
		return (0);
	}
	return (head);
}
