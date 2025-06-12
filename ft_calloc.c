/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:10:40 by muayna            #+#    #+#             */
/*   Updated: 2025/06/12 20:42:47 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;
	size_t		i;

	i = 0;
	p = malloc(nelem * elsize);
	while (i <= nelem * elsize)
	{
		((char *)p)[i] = '\0';
		i++;
	}
	return (p);
}
