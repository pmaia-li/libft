/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:24:37 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 12:37:47 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*s;

	s = str;
	if (n == 0)
		return (str);
	while (n > 0)
	{
		*s = '\0';
		s++;
		n--;
	}
	return (str);
}
