/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:40:26 by mgranate          #+#    #+#             */
/*   Updated: 2022/02/02 19:02:06 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
	{
		while (av[0][i])
		{
			write(1, &av[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
