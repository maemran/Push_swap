/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <salshaha@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:36:21 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/02 14:51:23 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*sr1;
	const unsigned char	*sr2;
	size_t				i;

	i = 0;
	sr1 = ((unsigned char *)s1);
	sr2 = ((unsigned char *)s2);
	while (i < n && (sr1[i] != '\0' || sr2[i] != '\0'))
	{
		if (sr1[i] != sr2[i])
			return (sr1[i] - sr2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	printf("%i\n",ft_strncmp("mmmm", "mo", 4));
	printf("%i",strncmp("mmmm", "mo", 4));
}*/
