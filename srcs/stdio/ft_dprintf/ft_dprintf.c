/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:32:04 by tkara2            #+#    #+#             */
/*   Updated: 2024/09/16 14:04:18 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dpf_format_checker(int fd, char format, va_list args)
{
	int						count;
	unsigned long long int	ptr;

	count = 0;
	if (format == 'c')
		count += ft_dpf_putchar(fd, va_arg(args, int));
	else if (format == 's')
		count += ft_dpf_putstr(fd, va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		count += ft_dpf_putnbr(fd, va_arg(args, int));
	else if (format == 'u')
		count += ft_dpf_putnbr_uint(fd, va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_dpf_putnbr_hex(fd, va_arg(args, unsigned int), format);
	else if (format == 'p')
	{
		ptr = va_arg(args, unsigned long long int);
		if (ptr)
			count += ft_dpf_putstr(fd, "0x");
		count += ft_pf_putaddr(ptr);
	}
	else if (format == '%')
		count += ft_dpf_putchar(fd, '%');
	return (count);
}

int	ft_dprintf(int fd, const char *format, ...)
{
	int		i;
	int		return_value;
	va_list	args;

	if (!format)
		return (-1);
	i = 0;
	return_value = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			return_value += ft_dpf_format_checker(fd, format[i + 1], args);
			i++;
		}
		else
			return_value += ft_dpf_putchar(fd, format[i]);
		i++;
	}
	va_end(args);
	return (return_value);
}
