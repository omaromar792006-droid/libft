/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:14:32 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/11 16:38:54 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*#include "libft.h"
#include <unistd.h>

int	main(void)
{
	t_list	*lst;
//	t_list	*n1;
//	t_list	*n2;

	lst = NULL;
//	n1 = ft_lstnew("A");
//	n2 = ft_lstnew("B");
//	if (!n1 || !n2)
//		return (1);
	ft_lstadd_front(&lst, ft_lstnew("A"));
	ft_lstadd_front(&lst, ft_lstnew("B"));
	while (lst)
	{
		write(1,lst->content, 1);
		lst = lst->next;
	}
	return (0);
}*/
