/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 01:23:32 by tkara2            #+#    #+#             */
/*   Updated: 2024/09/16 13:47:27 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pf_putnbr(int n)
{
	unsigned int	nb;
	int				len;

	len = 0;
	if (n < 0)
	{
		len += ft_pf_putchar('-');
		n = -n;
	}
	nb = n;
	if (nb > 9)
		len += ft_pf_putnbr(nb / 10);
	len += ft_pf_putchar((nb % 10 + '0'));
	return (len);
}
