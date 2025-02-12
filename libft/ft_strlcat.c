/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <salshaha@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:43:09 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/12 11:03:34 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;
	size_t	dest_len;

	i = 0;
	dest_len = ft_strlen(dst);
	if (dest_len >= size)
		return (ft_strlen(src) + size);
	length = dest_len;
	while (src[i] != '\0' && length < size - 1)
	{
		dst[length] = src[i];
		length++;
		i++;
	}
	dst[length] = '\0';
	return (ft_strlen(src) + dest_len);
}
/*
int	main(void)
{
	char	j[22] = "hi";
	char	i[] = "ttt";

	printf("%li", ft_strlcat(j, i, 3));
}*/
