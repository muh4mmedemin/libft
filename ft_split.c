/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:49:54 by muayna            #+#    #+#             */
/*   Updated: 2025/06/09 22:48:58 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	countw(char *s, char sep)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i + 1] == sep && s[i] != sep) || (s[i + 1] == '\0'
				&& s[i] != sep))
			word++;
		i++;
	}
	return (word);
}

char *char_malloc(char *s, char c)
{
	int size;
	int size_temp;
	char *temp;

	size = 0;
	while(s[size] != c && s[size] != '\0')
		size++;
	size_temp = size;
	temp = malloc(size + 1);
	temp[size] = '\0';
	size = 0;
	while (size < size_temp)
	{
		temp[size] = s[size];
		size++;
	}
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		b;
	int		word_size;
	char	**str;

	b = 0;
	word_size = countw((char *)s, c);
	i = 0;
	str = malloc((word_size + 1) * sizeof(char *));
	while (i < word_size)
	{
		if (s[b] != c && s[b] != '\0')
		{
			str[i] = char_malloc((char *)&s[b], c);
			i++;
		}
		while (s[b] != c && s[b] != '\0')
			b++;
		while (s[b] == c && s[b] != '\0')
			b++;
	}
	str[i] = '\0';
	return (str);
}
