/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiachang <jiachang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:26:02 by jiachang          #+#    #+#             */
/*   Updated: 2023/07/06 16:00:53 by jiachang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);

void	print_char_len(char c, int *len);
void	print_string_len(char *s, int *len);
void	print_decimal_len(int x, int *len);
void	print_pointer_len(uintptr_t num, int *len);
void	print_unsigned_len(unsigned int num, int *len);
void	print_hexalow_len(unsigned int num, int *len);
void	print_hexaup_len(unsigned int num, int *len);

#endif
