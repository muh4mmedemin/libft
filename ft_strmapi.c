/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 08:18:50 by muayna            #+#    #+#             */
/*   Updated: 2025/06/10 08:18:50 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *str;

    i = 0;
    if (f == NULL)
        return NULL;
    str = malloc(ft_strlen((char *)s) + 1);
    if (str == NULL)
        return NULL;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0'; 
    return str;
}
