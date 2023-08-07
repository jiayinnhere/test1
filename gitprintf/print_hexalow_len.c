/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexalow_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiachang <jiachang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:05:33 by jiachang          #+#    #+#             */
/*   Updated: 2023/07/06 16:10:13 by jiachang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	print_char_len(char c, int *len);

void	print_hexalow_len(unsigned int num, int *len)
{
	if (num >= 16)
	{
		print_hexalow_len(num / 16, len);
		print_hexalow_len(num % 16, len);
	}
	else
	{
		if (num <= 9)
			print_char_len((num + '0'), len);
		else
			print_char_len((num - 10 + 'a'), len);
	}
}
