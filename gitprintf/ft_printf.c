/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiachang <jiachang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:30:55 by jiachang          #+#    #+#             */
/*   Updated: 2023/07/06 17:27:06 by jiachang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	print_checker(char c, va_list ap, int *len)
{
	if (c == 'c')
		print_char_len(va_arg(ap, int), len);
	if (c == 's')
		print_string_len(va_arg(ap, char *), len);
	if (c == 'd' || c == 'i')
		print_decimal_len(va_arg(ap, int), len);
	if (c == 'p')
		print_pointer_len((uintptr_t)(va_arg(ap, void *)), len);
	if (c == 'u')
		print_unsigned_len(va_arg(ap, unsigned int), len);
	if (c == 'x')
		print_hexalow_len(va_arg(ap, unsigned int), len);
	if (c == 'X')
		print_hexaup_len(va_arg(ap, unsigned int), len);
	if (c == '%')
		print_char_len ('%', len);
	else
		return ;
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			print_checker(s[i + 1], ap, &len);
			i++;
		}
		else
			print_char_len(s[i], &len);
		i++;
	}
	va_end(ap);
	return (len);
}

// int	main(void)
// {
// 	int	num = 100;
// 	void *ptr = &num;
// 	int	printf_len;
// 	int	ft_printf_len;

// 	printf("%d\n", 2147483644);
// 	ft_printf("%d\n", 2147483644);
// 	ft_printf("%s\n", "YOUR THE BEST, JIA YINN!!!! DON'T GIVE UP!!!!");
// 	printf_len = printf("%p\n", ptr);
// 	ft_printf_len = ft_printf("%p\n", ptr);

// 	printf("printf len: %d\n", printf_len);
// 	printf("ft_printf len: %d\n", ft_printf_len);

// 	printf("%x\n", -42);
// 	ft_printf("%x\n", -42);

// 	printf("%X\n", 232);
// 	ft_printf("%X\n", 232);

// 	printf("%%\n");
// 	ft_printf("%%\n");

// 	printf("jodene, %d\n", 2);

// }
