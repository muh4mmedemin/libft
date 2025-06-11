/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dark <dark@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:36:21 by muayna            #+#    #+#             */
/*   Updated: 2025/06/11 13:29:20 by dark             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		srcsize;
	char	*newstr;

	srcsize = 0;
	while (s[srcsize])
		srcsize++;
	newstr = malloc(srcsize + 1);
	srcsize = 0;
	while (s[srcsize])
	{
		newstr[srcsize] = s[srcsize];
		srcsize++;
	}
	newstr[srcsize] = '\0';
	return (newstr);
}
