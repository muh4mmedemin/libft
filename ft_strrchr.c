/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 11:27:43 by muayna            #+#    #+#             */
/*   Updated: 2025/06/15 11:30:39 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(char const *s, int c)
{
	int	srcsize;

	srcsize = 0;
	while (s[srcsize])
		srcsize++;
	while (srcsize >= 0)
	{
		if (s[srcsize] == c)
		{
			return ((char *)s + srcsize);
		}
		srcsize--;
	}
	return (NULL);
}
