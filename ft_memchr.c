/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:12:04 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 12:37:33 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*temp_str;

	temp_str = (char *)str;
	while (n > 0)
	{
		if (*temp_str == c)
			return ((void *)temp_str);
		temp_str++;
		n--;
	}
	return (0);
}
