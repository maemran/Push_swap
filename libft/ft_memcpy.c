/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:39:49 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/11 11:07:54 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		i++;
		src++;
		dest++;
	}
	return ((void *)dest - i);
}
/*int	main (void)
{
	char dest[50];
	printf("%p\n",ft_memcpy(dest,"raneem",3));
	printf("%p",memcpy(dest,"raneem",3));
}*/
