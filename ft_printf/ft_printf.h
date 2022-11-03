/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:25:21 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/26 16:25:23 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>

typedef struct s_flags
{
	int				already_print;
	int				type;
	int				width;
	int				minus;
	int				zero;
	int				dot;
	int				star;
}					t_flags;

int		ft_printf(const char *str, ...);
void	ft_putnbr_base_fd(uintptr_t nbr, int fd, int *count);
void	ft_print_p(uintptr_t nbr, int fd, int *count);
void	ft_print_s(char *stringa, int fd, int *count);
void	ft_putnbr_xup(uintptr_t nbr, int fd, int *count);
void	ft_putnbru_fd(unsigned int nb, int fd, int *count);
void	ft_putchar_fd(char c, int fd, int *count);
void	ft_putnbr_fd(int nb, int fd, int *count);
void	ft_putstr_fd(char *s, int fd, int *count);

#endif
