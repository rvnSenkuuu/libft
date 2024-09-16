/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dpf_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:46:53 by tkara2            #+#    #+#             */
/*   Updated: 2024/09/16 13:54:48 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dpf_putnbr(int fd, int n)
{
	unsigned int	nb;
	int				len;

	len = 0;
	if (n < 0)
	{
		len += ft_dpf_putchar(fd, '-');
		n = -n;
	}
	nb = n;
	if (nb > 9)
		len += ft_dpf_putnbr(fd, nb / 10);
	len += ft_dpf_putchar(fd, (nb % 10) + '0');
	return (len);
}
