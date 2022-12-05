/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:32:28 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 12:37:04 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	temp;
	size_t			i;

	s = (unsigned char *)str;
	temp = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		s[i] = temp;
		i++;
	}
	return (s);
}
