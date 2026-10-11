/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:49:42 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/10 14:22:26 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*double_num(void *content)
{
	int	*new_num;

	new_num = malloc(sizeof(int));
	if (!new_num)
		return (NULL);
	*new_num = *(int *)content * 2;
	return (new_num);
}

void	del_content(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_list;
	int		*a;
	int		*b;
	int		*c;

	lst = NULL;
	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	c = malloc(sizeof(int));
	if (!a || !b || !c)
		return (1);
	*a = 1;
	*b = 2;
	*c = 3;
	ft_lstadd_back(&lst, ft_lstnew(a));
	ft_lstadd_back(&lst, ft_lstnew(b));
	ft_lstadd_back(&lst, ft_lstnew(c));
	new_list = ft_lstmap(lst, double_num, del_content);
	printf("Original list:\n");
	print_list(lst);
	printf("New list:\n");
	print_list(new_list);
	ft_lstclear(&lst, del_content);
	ft_lstclear(&new_list, del_content);
	return (0);
}*/
