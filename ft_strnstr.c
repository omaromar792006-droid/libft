/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:31:34 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/04 12:48:34 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j] && i
			+ j < len)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str);
		i++;
	}
	return (NULL);
}
/*int     main(void)
{
        char    *str;
        char    *result;
        str = "Hello World";
        result = ft_strnstr(str, "World", 11);
        printf("Result 1: %s\n", result);
        result = ft_strnstr(str, "World", 5);
        printf("Result 2: %s\n", result);
        result = ft_strnstr(str, "Hello", 5);
        printf("Result 3: %s\n", result);
        result = ft_strnstr(str, "", 5);
        printf("Result 4: %s\n", result);
        return (0);

}*/
