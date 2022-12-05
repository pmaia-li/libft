/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:26:46 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/11/30 14:27:20 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	t;
	char	*a;
	char	*b;

	t = ft_strlen(src);
	i = 0;
	a = dest;
	b = src;
	if (size == 0)
		return (t);
	if (size > 0)
	{
		while (*b != '\0' && i < size -1)
		{
			*a = *b;
			i++;
			a++;
			b++;
		}
	}
	*a = '\0';
	return (t);
}
