/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:45:15 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/04 15:27:06 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, const int str, size_t n)
{
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = s;
	while (i < n)
	{
		d[i] = (unsigned char)str;
		i++;
	}
	return (d);
}
/*#include <stdio.h>

int	main(void)
{
	char *str[5];
	printf ("%s",(char*)ft_memset (str, 'A' , 4));
}*/
