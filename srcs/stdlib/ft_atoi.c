/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:27:42 by tkara2            #+#    #+#             */
/*   Updated: 2024/09/16 13:28:05 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned long long int	i;
	int						sign;
	unsigned long long int	res;
	char					*str;

	i = 0;
	sign = 1;
	res = 0;
	str = (char *)nptr;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -sign;
	while (ft_isdigit(str[i]))
	{
		if ((res * 10) + (str[i] - '0') > ULLONG_MAX && sign == 1)
			return (-1);
		if ((res * 10) + (str[i] - '0') > ULLONG_MAX && sign == -1)
			return (0);
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
