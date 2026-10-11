/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:24:33 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/05 15:35:43 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/*#include "libft.h"
#include <unistd.h>

int	main(void)
{
	t_list	*lst;
	t_list	*last;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("Hello"));
	ft_lstadd_back(&lst, ft_lstnew("42"));
	ft_lstadd_back(&lst, ft_lstnew("Amman"));
	last = ft_lstlast(lst);
	if (last)
		ft_putendl_fd((char *)last->content, 1);
	return (0);
}*/
