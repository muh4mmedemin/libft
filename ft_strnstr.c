/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:26:04 by muayna            #+#    #+#             */
/*   Updated: 2025/05/30 14:09:12 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, unsigned long len)
{
	int	i;
	int	ltlsize;

	ltlsize = 0;
	i = 0;
	while (i < len)
	{
		ltlsize = 0;
		while (big[i + ltlsize] == little[ltlsize])
		{
			ltlsize++;
			if (little[ltlsize] == '\0')
			{
				return ((const char *)little);
			}
		}
		i++;
	}
	return (0);
}
