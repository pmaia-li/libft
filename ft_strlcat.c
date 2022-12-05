/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:59:23 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 13:51:40 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	t_s;
	size_t	t_d;
	char	*a;
	char	*b;

	a = dest;
	b = src;
	t_d = ft_strlen(dest);
	t_s = ft_strlen(src);
	i = 0;
	if (size <= t_d)
		return (t_s + size);
	size = (size - t_d);
	while (*a != '\0')
		a++;
	while (i < (size - 1) && *b != '\0')
	{
		*a = *b;
		i++;
		a++;
		b++;
	}
	*a = '\0';
	return (t_s + t_d);
}
