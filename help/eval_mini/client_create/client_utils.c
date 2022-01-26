/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:32:18 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/13 18:45:23 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/mini_talk.h"

unsigned long	check_long(unsigned long number, int neg)
{
	if (number > 9223372036854775807)
	{
		if (neg == 1)
			return (0);
		else
			return (-1);
	}
	if (neg == 1)
		return (-number);
	else
		return (number);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					neg;
	unsigned long		number;

	i = 0;
	neg = 0;
	number = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-')
		neg = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	number = check_long(number, neg);
	return ((int)number);
}

void	dec_bin(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
		{
			kill(pid, SIGUSR2);
		}
		usleep(2500);
		bit++;
	}
}
