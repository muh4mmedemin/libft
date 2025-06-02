/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:38:02 by muayna            #+#    #+#             */
/*   Updated: 2025/06/02 13:55:41 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	length(char *s1, char *set)
{
	int	check;
	int	sizemalloc;
	int	b;
	int	i;

	i = 0;
	b = 0;
	sizemalloc = 0;
	check = 0;
	while (s1[i])
	{
		b = 0;
		check = 0;
		while (set[b])
		{
			if (set[b] == s1[i])
				check++;
			b++;
		}
		if (check == 0)
			sizemalloc++;
		i++;
	}
	return (sizemalloc);
}

char	*write(char *s1, char *set, char *trimmed)
{
	int	check;
	int	b;
	int	i;

	i = 0;
	b = 0;
	check = 0;
	while (s1[i])
	{
		b = 0;
		check = 0;
		while (set[b])
		{
			if (set[b] == s1[i])
				check++;
			b++;
		}
		if (check == 0)
			trimmed[i] = s1[i];
		i++;
	}
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;

	trimmed = malloc(length((char *)s1, (char *)set) + 1);
	trimmed = write((char *)s1, (char *)set, trimmed);
	i = ft_strlen(trimmed);
	trimmed[i] = '\0';
	return (trimmed);
	i = 0;
}
