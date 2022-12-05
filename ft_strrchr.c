/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:55:49 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 12:36:48 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*temp_str;

	temp_str = (char *)str + ft_strlen((char *)str);
	while (*temp_str != c)
	{
		if (temp_str == str)
			return (NULL);
		temp_str--;
	}
	return (temp_str);
}
