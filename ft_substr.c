/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:20:23 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/07 14:10:51 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static size_t	slen(char *s, size_t start, size_t len)
{
	size_t	i;

	i = 0;
	while (start && *s)
	{
		start--;
		s++;
	}
	while (*s && i < len)
	{
		s++;
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*aux;

	if (ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char) * 1);
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	substr = (char *)malloc(sizeof(char) * (slen((char *) s, start, len) + 1));
	if (!substr)
		return (NULL);
	while (start-- && *s)
		s++;
	aux = substr;
	while (len-- && *s)
	{
		*aux = *s;
		s++;
		aux++;
	}
	*aux = '\0';
	return (substr);
}
