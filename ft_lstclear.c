/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:31:29 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/11 15:37:26 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}

/*#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("Hello");
	b = ft_lstnew("World");
	a->next = b;
	ft_lstclear(&a, del);
	if (a == NULL)
		printf("List cleared!\n");
	free(a);
	free(b);
	return (0);
}*/
