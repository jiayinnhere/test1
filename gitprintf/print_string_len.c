/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiachang <jiachang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:44:55 by jiachang          #+#    #+#             */
/*   Updated: 2023/07/06 15:53:24 by jiachang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write (fd, &s[i++], 1);
}

void	print_string_len(char *s, int *len)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		*len = *len + 6;
	}
	else
	{
		ft_putstr_fd(s, 1);
		*len = *len + strlen(s);
	}
}
