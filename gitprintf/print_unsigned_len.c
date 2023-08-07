/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiachang <jiachang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:48:49 by jiachang          #+#    #+#             */
/*   Updated: 2023/07/05 23:49:32 by jiachang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

char	*ft_strdup(const char *str);

int		ft_countchar(int n);

char	*ft_itoa(int n);

void	print_char_len(char c, int *len);

void	print_unsigned_len(unsigned int num, int *len)
{
	if (num >= 10)
		print_unsigned_len(num / 10, len);
	print_char_len((num % 10 + '0'), len);
}
