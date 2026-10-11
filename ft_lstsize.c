/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:20:34 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/05 15:23:58 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
/*#include "libft.h"
#include <unistd.h>

int	main(void)
{
	t_list			*lst;
	unsigned int	size;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("Hello"));
	ft_lstadd_back(&lst, ft_lstnew("42"));
	ft_lstadd_back(&lst, ft_lstnew("Amman"));
	size = ft_lstsize(lst);
	ft_putnbr_fd(size, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
