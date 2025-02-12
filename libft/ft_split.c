/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <salshaha@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:09:04 by salshaha          #+#    #+#             */
/*   Updated: 2024/09/12 12:20:41 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *string, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*string)
	{
		if (*string != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*string == c)
		{
			in_word = 0;
		}
		string++;
	}
	return (count);
}

static int	size(char const *s, char c)
{
	int	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}

static void	freem(char **d, int k)
{
	while (k >= 0)
	{
		free(d[k]);
		k--;
	}
	free(d);
}

static char	**pro(char const *s, char c, char **d, int k)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		d[k] = (char *)malloc(size(s + i, c) + 1);
		if (d[k] == NULL)
		{
			freem(d, k - 1);
			return (NULL);
		}
		j = 0;
		while (s[i] != c && s[i] != '\0')
			d[k][j++] = s[i++];
		d[k][j] = '\0';
		k++;
	}
	return (d);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**d;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	d = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (d == NULL)
		return (NULL);
	d = pro(s, c, d, 0);
	if (d)
		d[word_count] = NULL;
	return (d);
}
/*
int	main(void)
{
	char	**b;

	//test1 = "\0 sarah"; c = ' ';
	//test2 = NULL;
	b = ft_split("      split       this\0 for   me  !       ", ' ');
	printf("%s,%s,%s", b[0],b[1],b[2]);
}*/
