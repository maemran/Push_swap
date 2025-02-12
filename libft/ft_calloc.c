/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:18:02 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/11 11:16:41 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		a[i] = 0;
		i++;
	}
	return ((void *)a);
}
/*
int	main(void) {
	size_t nmemb = 5; // Number of elements
	size_t size = sizeof(int); // Size of each element

	// Call the custom calloc function
	int *array = (int *)calloc(nmemb, size);

	if (array == NULL) {
		printf("Memory allocation failed\n");
		return (1);
	}

	// Print the elements to verify they are initialized to 0
	printf("Allocated array:\n");
	for (size_t i = 0; i < nmemb; i++) {
		printf("array[%zu] = %d\n", i, array[i]);
	}

	// Free the allocated memory
	free(array);

	return (0);
}*/
