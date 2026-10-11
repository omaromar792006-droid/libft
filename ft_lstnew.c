/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:07:45 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/11 16:25:46 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc (sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
/*#include <unistd.h>
int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello 42");
	if (!node)
		return (1);
	write(1,node->content, 8);
	write(1, "\n", 1);
	free(node);
	return (0);
}*/
