/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:02:24 by oaljausi          #+#    #+#             */
/*   Updated: 2026/09/22 13:49:39 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	const unsigned char	*str;
	unsigned char		*dest;
	size_t				i;

	dest = d;
	str = s;
	i = 0;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main ()
{
	char o[]= "omarjaioiusy";
	char q[20];
	ft_memcpy(q,o,12);
	printf("%s",q);
}*/
