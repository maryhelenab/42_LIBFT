/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:55:42 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/01 21:02:23 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lbift.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return (0);
	if (*lts)
		new->next = *lst;
	*lst = new;
}
