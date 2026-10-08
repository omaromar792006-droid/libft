/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 14:32:41 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/08 19:17:48 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		sub_len = 0;
	else
	{
		sub_len = s_len - start;
		if (sub_len > len)
			sub_len = len;
	}
	sub = malloc((sizeof(char)) * (sub_len + 1));
	if (!sub)
		return (NULL);
	s_len = 0;
	while (s_len < sub_len)
	{
		sub[s_len] = s[s_len + start];
		s_len++;
	}
	sub[s_len] = '\0';
	return (sub);
}
/*int	main(void)
{
	char	*s;
	char	*q;

	s = "omarjaiousy";
	q = ft_substr(s, 5, 5);
	printf("%s", q);
}*/
