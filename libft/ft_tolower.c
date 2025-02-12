/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <salshaha@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:36:46 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/02 14:51:46 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	char	x;

	if (c >= 65 && c <= 90)
	{
		x = c + 32;
		return (x);
	}
	else
		return (c);
}
/*int main(void)
{
	char	c = 'H';
	printf("%c",ft_tolower(c));
}*/
