/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:36:30 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/11 15:38:53 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*#include <unistd.h>

int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	lst = NULL;
	n1 = ft_lstnew("limar");
	n2 = ft_lstnew("omar");
	n3 = ft_lstnew ("love");
	if (!n1 || !n2 || !n3)
		return (1);
	ft_lstadd_back(&lst,n1);
        ft_lstadd_back(&lst,n2);  
    	ft_lstadd_back(&lst,n3);
	while (lst)
	{
		write (1,lst->content,5);
		write(1,"\n",1);
		lst = lst ->next;

	}

}*/
