/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 10:05:43 by muayna            #+#    #+#             */
/*   Updated: 2025/06/21 15:26:41 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *final;
    void    *content;

    final = NULL;
    while (lst != NULL)
    {
        content = f(lst->content);
        new = ft_lstnew(content);
        if (!new)
        {
            del(content);
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&final, new);
        new = new->next;
        lst = lst -> next;
    }
    return (final);
}

void *upper (void *s)
{
    int i = 0;
    char *d = (char *)s;
    while (d[i])
    {
        d[i] = ft_toupper(d[i]);
        i++;
    }
    return d;
}

int main ()
{
    t_list *a = ft_lstnew(ft_strdup("ahmet"));
    a->next = ft_lstnew(ft_strdup("ahmet"));
    a->next->next = ft_lstnew(ft_strdup("ahmet"));
    t_list *new = ft_lstmap(a, upper, free);
    t_list  *tmp;
    t_list *root;
    tmp = new;
    while (new != NULL)
    {
        printf("%s", (char *)new->content);
        new = new->next;
    }
    new = tmp;
    
}