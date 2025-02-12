/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <salshaha@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:37:06 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/02 14:51:50 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	char	x;

	if (c >= 97 && c <= 122)
	{
		x = c - 32;
		return (x);
	}
	else
		return (c);
}
/*int main(void)
{
	char	c = '/';
	printf("%c",ft_toupper(c));
}*/
