/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:11:59 by fnaldi            #+#    #+#             */
/*   Updated: 2023/04/28 17:12:00 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sig(int signal, siginfo_t *si, void *data)
{
	static int	bit;
	static int	n;

	(void)data;
	if (bit < 7)
	{
		n += (signal == SIGUSR1) << bit;
		bit++;
	}
	else
	{
		n += (signal == SIGUSR1) << bit;
		if (n)
			write (1, &n, 1);
		else
			kill(si->si_pid, SIGUSR1);
		n = 0;
		bit = 0;
	}
}

int	main(int ac, char **av)
{	
	struct sigaction	sa;

	(void)av;
	if (ac != 1)
	{
		write(1, "Error!\n", 8);
		return (0);
	}
	ft_memset(&sa, 0, sizeof(sa));
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = ft_sig;
	ft_printf("Il pid del server e':%d\n", (int)getpid());
	while (1)
	{
		sigaction(SIGUSR1, &sa, 0);
		sigaction(SIGUSR2, &sa, 0);
	}
	return (0);
}
