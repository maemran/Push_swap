/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:37:29 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/11 10:42:32 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s == NULL && d == NULL)
		return (NULL);
	if (s >= d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (d);
	}
	else if (s < d)
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (d);
}
/*
int	main(void)
{
	const char	src[100] = "sarah";
	char	*ans = (char *)ft_memmove((char *)(src), src + 3, 2);
	printf ("%s", ans);
}*/
