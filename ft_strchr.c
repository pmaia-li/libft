/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:48:47 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 12:41:43 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*temp_str;

	temp_str = (char *)str;
	while (*temp_str != c)
	{
		if (*temp_str == '\0')
			return (NULL);
		temp_str++;
	}
	return (temp_str);
}
