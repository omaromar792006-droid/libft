/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:30:13 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/03 11:53:16 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[i] && i < size)
		i++;
	dest_len = i;
	j = 0;
	while (src[j])
		j++;
	src_len = j;
	if (dest_len == size)
		return (size + src_len);
	j = 0;
	while (src[j] && dest_len + j + 1 < size)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}
/*int main ()
{


        char o[] = "jaiousy";
        char oo[] = "42";
        size_t  re;
        re = ft_strlcat(o,oo,20);
        printf("%zu",re);
}*/
