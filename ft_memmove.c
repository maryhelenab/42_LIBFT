/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:41:19 by malbuque          #+#    #+#             */
/*   Updated: 2021/11/21 13:43:22 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*original;
	size_t			i;

	original = (unsigned char *) dst;
	i = 0;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (original);
}

/*#include <stdio.h>
int main(void)
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	printf("Teste    1: %s\n", ft_memmove(s0, s, 7));
	printf("Original 1: %s\n", memmove(s0, s, 7));
	printf("Confirmaçao: %d\n", confirmaçao());
	printf("Teste    2: %s\n", ft_memmove(s, s + 2, 0));
	printf("Original 2: %s\n", memmove(s, s + 2, 0));
	//printf("Confirmaçao - %d\n", if(ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7)	return(1)));
	printf("Teste    3: %s\n", ft_memmove(s, s + 2, 2));
	printf("Original 3: %s\n", memmove(s, s + 2, 2));
	//printf("Confirmaçao - %d\n", if(ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7)	return(1)));
	printf("Teste    4: %s\n", ft_memmove(sResult + 1, sResult, 2));
	printf("Original 4: %s\n", memmove(sResult + 1, sResult, 2));
	//printf("Confirmaçao - %d\n", if(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7)	return(1)));
	return (0);
}*/
