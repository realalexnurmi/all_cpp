/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:54:14 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/13 18:48:48 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/mini_talk.h"

void	ft_put_nbr(pid_t pid)
{
	if (pid >= 10)
	{
		ft_put_nbr (pid / 10);
		ft_put_nbr (pid % 10);
	}
	else
	{
		pid += 48;
		write (1, &pid, 1);
	}
}

void	handler(int num)
{
	static char	c = 0;
	static int	bit = 0;

	if (SIGUSR1 == num)
		c += (1 << bit);
	bit++;
	if (bit == 8)
	{
		if (c == '\0')
			write(STDOUT_FILENO, "\n", 1);
		else
			write(STDOUT_FILENO, &c, 1);
		bit = 0;
		c = 0;
	}
}
