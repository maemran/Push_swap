/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:57:56 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/07 16:57:58 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	c;
	char	*a;

	c = 0;
	i = 0;
	a = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (a == NULL)
		return (NULL);
	if (s1 && s2)
	{
		i = 0;
		while (s1[i] != '\0')
			a[c++] = s1[i++];
		i = 0;
		while (s2[i] != '\0')
			a[c++] = s2[i++];
		a[c] = '\0';
		return (a);
	}
	return (NULL);
}
/*
int main (void)
{
	printf("%c", ft_strjoin("sarah ","muhammed"));
}*/
