/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:41:19 by malbuque          #+#    #+#             */
/*   Updated: 2021/11/10 20:08:26 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*original;

	original = (unsigned char *) dst;
	if (!dst && !src)
		return (0);
	while (len--)
		original[len] = ((unsigned char *)src)[len];
	((unsigned char *)dst)[len] = original[len];
	return (dst);
}
