/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:56:36 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/07 16:58:38 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		size;
	char	*dest;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	size = end - start + 1;
	dest = malloc(size + 1);
	if (!dest)
		return (NULL);
	dest = ft_memcpy(dest, s1 + start, size);
	dest[size] = '\0';
	return (dest);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("hfsarahgg", "hfg"));
}*/
