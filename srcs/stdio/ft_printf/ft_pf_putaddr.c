/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putaddr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:10:53 by tkara2            #+#    #+#             */
/*   Updated: 2024/09/16 14:01:22 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pf_putaddr(unsigned long long int ptr)
{
	int		len;
	char	*base;

	base = "0123456789abcdef";
	len = 0;
	if (!ptr)
		return (ft_pf_putstr("(nil)"), 5);
	if (ptr >= 16)
		len += ft_pf_putaddr(ptr / 16);
	len += ft_pf_putchar(base[ptr % 16]);
	return (len);
}
