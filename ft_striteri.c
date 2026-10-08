/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaljausi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 18:13:18 by oaljausi          #+#    #+#             */
/*   Updated: 2026/10/04 12:20:24 by oaljausi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	f(unsigned int i,char *c)
{
	if (i % 2 == 0)
		*c = *c - 32;
}
int	main(void)
{
	char o[] = "jfdkl";
       	ft_striteri(o,f);
	printf("%s",o);
}*/
