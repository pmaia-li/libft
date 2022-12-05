/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:15:44 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 13:51:16 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*temp_str1;
	unsigned char	*temp_str2;
	size_t			i;

	i = 0;
	temp_str1 = (unsigned char *)str1;
	temp_str2 = (unsigned char *)str2;
	while (i < n)
	{
		if (*temp_str1 != *temp_str2)
			return (*temp_str1 - *temp_str2);
		temp_str1++;
		temp_str2++;
		i++;
	}
	return (0);
}
