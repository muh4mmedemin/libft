/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:26:04 by muayna            #+#    #+#             */
/*   Updated: 2025/06/03 17:36:24 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, unsigned long len)
{
	int	i;
	int	ltlsize;

	i = 0;
	while (i < len)
	{
		ltlsize = 0;
		while (big[i + ltlsize] == little[ltlsize])
		{
			ltlsize++;
			if (little[ltlsize] == '\0')
			{
				return ((char *)little);
			}
		}
		i++;
	}
	return (0);
}
