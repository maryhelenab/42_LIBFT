/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:26:27 by malbuque          #+#    #+#             */
/*   Updated: 2021/11/28 14:58:35 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_new(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{	
		if (s[i] == c)
			j++;
		i++;
	}
	return ((ft_strlen(s) - j) + 1);
}

char	*ft_getsplit(char const *s, char c, size_t start)
{
	size_t	end;

	end = start;
	while (s[end] != c && !s[end])
		end++;
	return (ft_substr(s, (unsigned int) start, (end - start)));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**dest;

	if (!s)
		return (0);
	dest = (char **)malloc(sizeof(*s) * len_new(s, c));
	if (!dest)
		return (0);
	i = 0;
	j = 0;
	while (!s[i])
	{
		if (s[i] != c)
		{
			dest[j] = ft_getsplit(s, c, i);
			i = i + ft_strlen(dest[j]) - 1;
			j++;
		}
		i++;
	}
	dest[j] = "\0";
	return (dest);
	free (dest);
}
 /*#include <stdio.h>
 int main()
 {
	 char **tab = "  tripouille  42  ";
	 char c =  ' ';
	 printf("Teste: %s\n", ft_split(tab, c));
	 return(0);
 }*/
