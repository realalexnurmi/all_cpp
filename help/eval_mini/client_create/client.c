/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:32:15 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/13 18:50:34 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/mini_talk.h"

void	message(int pid, char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		dec_bin(pid, *str);
		str++;
	}
	dec_bin(pid, '\0');
	write(1, "Message delivered\n", 19);
}

int	check_argc(int argc)
{
	if (argc < 3)
	{
		write(1, "Error\n", 7);
		write(1, "./client [PID] [Message]\n", 26);
		return (0);
	}
	else if (argc > 3)
	{
		write(1, "Error\n", 7);
		write(1, "More than 3 arguments\n", 22);
		return (0);
	}
	else
		return (1);
}

int	check_pid(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			write(1, "Wrong PID\n", 11);
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	pid;

	if (check_argc(argc))
	{
		if (check_pid(argv[1]))
		{
			pid = 0;
			pid = ft_atoi(argv[1]);
			message(pid, argv[2]);
		}
	}
	else
		return (0);
	return (0);
}
