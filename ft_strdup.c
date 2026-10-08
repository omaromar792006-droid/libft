/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 20:12:50 by oaljausi          #+#    #+#             */
/*   Updated: 2026/09/26 20:35:17 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*copy;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
int	main(void)
{
	char	*o ;
	o = ft_strdup("limar 42");
	printf("%s",o);
	free(o);
}*/
