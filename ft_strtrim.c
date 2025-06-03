/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:38:02 by muayna            #+#    #+#             */
/*   Updated: 2025/06/03 09:32:43 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		start(char *s1, char *set)
{
	int i;
	i = 0;
	int b;
	int skipsize;
	skipsize = 0;
	int check;
	while(s1[i])
	{
		b = 0;
		check = 0;
		while (set[b])
		{
			if (set[b] == s1[i])
			{
				check = 1;
				skipsize++;
				i++;
			}
			b++;
		}
		if (check == 0)
			return skipsize;
	}
}
int		end(char *s1, char *set, int s1_size)
{
	int i;
	int b;
	b = 0;
	int check;
	while(s1[b])
	{
		i = 0;
		check = 0;
		while(set[i])
		{
			if (s1[s1_size - 1] == set[i])
			{
				check = 1;
				s1_size--;
			}
			i++;
		}
		b++;
		if (check == 0)
			return s1_size;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trimmed;
	int i;
	int malsize;
	malsize = end((char *)s1, (char *)set, ft_strlen((char *)s1)) - start((char *)s1, (char *)set) + 1, sizeof(char);
	i = 0;

	trimmed = malloc(malsize);
	while (i < malsize - 1)
	{
		trimmed[i] = s1[start((char *)s1, (char *)set) + i];
		i++;
	}
	trimmed[i] = '\0';
	printf("%d", i);
	printf("%d", ft_strlen(trimmed));
	return trimmed;

	
}

int main ()
{
	printf("%s", ft_strtrim("H!ELLO!", "H"));
}