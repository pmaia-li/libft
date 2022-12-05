/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:15 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/11/30 15:30:17 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (to_find[b] == '\0')
		return ((char *)str);
	while (str[a] != '\0' && a < len)
	{
		b = 0;
		while (str[a + b] == to_find[b] && a + b < len)
		{
			b++;
			if (to_find[b] == '\0')
				return ((char *)&str[a]);
		}
		a++;
	}
	return (0);
}
