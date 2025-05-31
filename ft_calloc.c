/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:10:40 by muayna            #+#    #+#             */
/*   Updated: 2025/05/30 17:04:41 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(unsigned long nelem, unsigned long elsize)
{
	void	*p;
	int		i;

	i = 0;
	p = malloc(nelem * elsize);
	while (i <= nelem * elsize)
	{
		((char *)p)[i] = '\0';
		i++;
	}
	return (p);
}
