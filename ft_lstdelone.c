/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 20:09:52 by muayna            #+#    #+#             */
/*   Updated: 2025/06/19 20:38:36 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}
#include <stdio.h>
int main ()
{
    char *ptr = ft_strdup("bir");
    char *ptr2 = ft_strdup("iki");
    t_list *deneme = ft_lstnew(ptr);
    //t_list *node2;
    ft_lstadd_back(&deneme, ft_lstnew(ptr2));
    printf("%s\n", (char *)deneme->content);
    printf("%s", (char *)deneme->next->content);
    //free(deneme-conte)
   // deneme -> next = ptr2;
    
    ft_lstdelone(deneme->next, free);
    ft_lstdelone(deneme, free);
   
}