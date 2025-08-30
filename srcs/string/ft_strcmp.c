/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:21:57 by tkara2            #+#    #+#             */
/*   Updated: 2025/08/30 12:25:04 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}