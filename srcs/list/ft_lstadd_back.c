/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkara2 <tkara2@student.42.ft>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:09:45 by tkara2            #+#    #+#             */
/*   Updated: 2024/09/29 16:34:18 by tkara2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last_node;

	if (*lst)
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new_node;
	}
	else
		*lst = new_node;
}
