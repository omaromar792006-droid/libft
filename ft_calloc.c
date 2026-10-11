/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 19:19:41 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/10 12:52:16 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (size != 0 && count > ((size_t)-1) / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{	
	int *arr;
	int i;
	arr = ft_calloc(5,sizeof(int));
	i = 0;
	while (i < 5)
	{
	printf("%d",arr[i]);
	i++;
	}
}*/
