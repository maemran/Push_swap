/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:58:23 by salshaha          #+#    #+#             */
/*   Updated: 2025/02/03 21:53:10 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	ft_process(const char *nptr, int length, int p, int n)
{
	long long int	num;

	num = 0;
	while (nptr[length] != '\0')
	{
		if (nptr[length] >= 48 && nptr[length] <= 57)
		{
			num = (num * 10) + (nptr[length] - '0');
			length++;
		}
		else
			break ;
	}
	if (n > 1 || p > 1 || (n == 1 && p == 1))
		return (0);
	else if (n == 1)
		num = num * -1;
	else if (n == 0 || p <= 1)
		num = num * 1;
	return (num);
}

long long int	ft_atoi(const char *nptr)
{
	long long int	length;
	long long int	postive;
	long long int	negative;

	length = 0;
	postive = 0;
	negative = 0;
	while ((nptr[length] >= 9 && nptr[length] <= 13) || nptr[length] == 32)
		length++;
	while (nptr[length] == '+' || nptr[length] == '-')
	{
		if (nptr[length] == '-')
		{
			negative++;
			length++;
		}
		if (nptr[length] == '+')
		{
			postive++;
			length++;
		}
	}
	return (ft_process(nptr, length, postive, negative));
}
/*
int	main(void)
{
	const char	*str = "       435jhgjsd";

	printf("%i",ft_atoi(str));
}
*/
