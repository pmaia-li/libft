/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:41:36 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 12:35:19 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*temp_d;
	char	*temp_s;

	temp_d = (char *)dest;
	temp_s = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*temp_d = *temp_s;
		temp_d++;
		temp_s++;
		n--;
	}
	return (dest);
}
