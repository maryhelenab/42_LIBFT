/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:41:19 by malbuque          #+#    #+#             */
/*   Updated: 2021/11/09 22:37:05 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*original;

	while (len--)
		original[len] = ((unsigned char *)src)[len];
	((unsigned char *)dst)[len] = original[len];
	return (dst);
}
