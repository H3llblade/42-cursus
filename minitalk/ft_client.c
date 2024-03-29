/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:11:48 by fnaldi            #+#    #+#             */
/*   Updated: 2023/04/28 17:11:50 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sendbit(unsigned int len, int server_pid, int bit)
{
	int	i;

	i = 0;
	while (i < bit)
	{
		if (len % 2 == 1)
			kill(server_pid, SIGUSR1);
		if (len % 2 == 0)
			kill(server_pid, SIGUSR2);
		if (len)
			len /= 2;
		i++;
		usleep(50);
	}
}

void	ft_sig_ok(int sig)
{
	(void)sig;
	ft_printf("Messaggio ricevuto!\n");
	exit(0);
}

int	main(int ac, char **av)
{
	int	server_pid;
	int	i;

	i = 0;
	if (ac != 3)
		return (ft_printf("Errore\n"));
	signal(SIGUSR1, ft_sig_ok);
	server_pid = ft_atoi(av[1]);
	while (av[2][i])
	{
		ft_sendbit(av[2][i], server_pid, 8);
		i++;
	}
	ft_sendbit(0, server_pid, 8);
	pause();
	return (0);
}
