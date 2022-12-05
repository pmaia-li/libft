/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:29:25 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 12:38:09 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	size_total;
	void	*dest;

	size_total = size * nitems;
	dest = malloc(size_total);
	if (!dest)
		return (0);
	ft_memset(dest, 0, size_total);
	return (dest);
}
