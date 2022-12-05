/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:32:29 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 13:55:29 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s_temp;

	if (!s || !f)
		return (NULL);
	s_temp = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s_temp == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_temp[i] = f(i, s[i]);
		i++;
	}
	s_temp[i] = '\0';
	return (s_temp);
}
