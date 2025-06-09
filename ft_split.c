/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna < muayna@student.42istanbul.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:49:54 by muayna            #+#    #+#             */
/*   Updated: 2025/06/08 16:10:18 by muayna           ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		b;
	int		e;
	char	**str;

	e = 0;
	i = 0;
	str = malloc(countw((char *)s, c) * sizeof(char *));
	while (s[i])
	{
		if ((s[i] != c && s[i - 1] == c) || (s[0] != c))
		{
			b = 0;
			while (s[i + b] != c)
			{
				b++;
			}
			str[e] = malloc(b + 1);
			e++;
			i++;
		}
		i++;
	}
}
int	main(void)
{
	ft_split("AAAA,BBB", ',');
}
