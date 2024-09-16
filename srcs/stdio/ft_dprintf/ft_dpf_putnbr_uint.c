/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dpf_putnbr_uint.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:51:51 by tkara2            #+#    #+#             */
/*   Updated: 2024/09/16 13:54:41 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dpf_putnbr_uint(int fd, unsigned int n)
{
	unsigned int	nb;
	int				len;

	len = 0;
	nb = n;
	if (nb > 9)
		len += ft_dpf_putnbr_uint(fd, nb / 10);
	len += ft_dpf_putchar(fd, (nb % 10) + '0');
	return (len);
}
