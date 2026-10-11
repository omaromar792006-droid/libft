/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:54:33 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/11 16:39:46 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*#include "libft.h"
#include <stdlib.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew(ft_strdup("Hello 42"));
	if (!node)
		return (1);
	ft_putendl_fd(node->content, 1);
	ft_lstdelone(node, free);
	ft_putendl_fd("Node deleted successfully!", 1);
	return (0);
}*/
