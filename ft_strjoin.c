/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:59:57 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/08 19:36:52 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*re;

	if (!s1 || !s2)
		return (NULL);
	re = malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!re)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		re[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		re[i] = s2[j];
		i++;
		j++;
	}
	re[i] = '\0';
	return (re);
}
/*int main()
{
        char *re;
        re = ft_strjoin("omar","jaiousy");
        printf("%s", re);
}*/
