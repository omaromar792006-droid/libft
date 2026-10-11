/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:58:35 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/11 15:45:36 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f (lst -> content);
		lst = lst -> next;
	}
}
/*
static void	print_content(void *content)
{
	ft_putendl_fd((char *)content, 1);
}

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("Hello"));
	ft_lstadd_back(&lst, ft_lstnew("42"));
	ft_lstadd_back(&lst, ft_lstnew("Amman"));
	ft_lstiter(lst, print_content);
	return (0);
}*/
