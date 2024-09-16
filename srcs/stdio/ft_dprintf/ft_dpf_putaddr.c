/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dpf_putaddr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:01:00 by tkara2            #+#    #+#             */
/*   Updated: 2024/09/16 14:03:07 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dpf_putaddr(int fd, unsigned long long int ptr)
{
	int		len;
	char	*base;

	base = "0123456789abcdef";
	len = 0;
	if (!ptr)
		return (ft_dpf_putstr(fd, "(nil)"), 5);
	if (ptr >= 16)
		len += ft_dpf_putaddr(fd, ptr / 16);
	len += ft_dpf_putchar(fd, base[ptr % 16]);
	return (len);
}
