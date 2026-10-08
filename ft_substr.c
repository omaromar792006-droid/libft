/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 14:32:41 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/03 14:58:37 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;
	size_t	s_len;
	size_t	i;

	s_len = 0;
	while (s[s_len])
		s_len++;
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
	i = 0;
	while (i < sub_len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*int main()
{
        char *s = "omarjaiousy";
        char *q =ft_substr( s, 5, 5 );
        printf("%s" , q);}*/
