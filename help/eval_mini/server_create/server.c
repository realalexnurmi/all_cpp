/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:15:53 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/13 18:48:27 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/mini_talk.h"

void	ft_start(void)
{
	write(1, "-Server start-\n", 16);
	write(1, "Getting the process PID...\n", 28);
}

void	ft_get_pid(void)
{
	pid_t	pid;

	pid = getpid();
	write(1, "PID: ", 6);
	ft_put_nbr(pid);
	write(1, "\n", 2);
}

void	wait_message(void)
{
	write (1, "Waiting for message...\n", 24);
}

int	main(void)
{
	ft_start();
	ft_get_pid();
	wait_message();
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		;
}
