/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiachang <jiachang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:41:53 by jiachang          #+#    #+#             */
/*   Updated: 2023/07/06 17:27:35 by jiachang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_putchar_fd(char c, int fd);

void	print_char_len(char c, int *len);

void	ptr_hexadecimal(uintptr_t num, int *len)
{
	if (num >= 16)
	{
		ptr_hexadecimal(num / 16, len);
		ptr_hexadecimal(num % 16, len);
	}
	else
	{
		if (num <= 9)
		{
			print_char_len((num + '0'), len);
		}
		else
		{
			print_char_len((num - 10 + 'a'), len);
		}
	}
}

void	print_pointer_len(uintptr_t num, int *len)
{
	write(1, "0x", 2);
	(*len) = (*len) + 2;
	if (num == 0)
	{
		print_char_len('0', len);
		return ;
	}
	ptr_hexadecimal(num, len);
}
