/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:26:04 by muayna            #+#    #+#             */
/*   Updated: 2025/06/15 12:07:00 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		ltlsize;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		ltlsize = 0;
		while (big[i + ltlsize] == little[ltlsize] && i + ltlsize < len)
		{
			if (little[ltlsize + 1] == '\0')
			{
				return ((char *)big + i);
			}
			ltlsize++;
		}
		i++;
	}
	return (0);
}
