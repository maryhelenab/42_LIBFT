/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:44:59 by malbuque          #+#    #+#             */
/*   Updated: 2021/11/20 19:14:34 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	s1_len;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !set)
		return (0);
	s1_len = ft_strlen(s1);
	dest = malloc((s1_len + 1) * sizeof(char));
	while (s1[i] && i < s1_len)
	{
		j = 0;
		if (s1[i] == set[j])
		{
			while (i + j < s1_len && s1[i + j] == set[j])
			{	
				if (set[j + 1] == 0)
					return ((char *)&s1[i]);
				j++;
			}
		}
		i++;
	}
	return (dest);
}

/*int main()
{
	char *s = ft_strtrim("   xxxtripouille", " x");
	printf("teste1: %s", s);
	return (0);
}*/
