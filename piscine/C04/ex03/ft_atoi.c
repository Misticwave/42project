/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:51:44 by mgranate          #+#    #+#             */
/*   Updated: 2022/01/26 22:27:08 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	diff;

	c = 0;
	s = 1;
	diff = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str [c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		diff = (str[c] - '0') + (diff * 10);
		c++;
	}
	return (diff * s);
}
