/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:21:53 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/07 11:44:36 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

const char	*ft_r_space(const char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	int	cont;
	int	a;

	a = 0;
	cont = 0;
	if (*str == 32 || (*str >= 9 && *str <= 13))
		str = ft_r_space(str);
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
		{
			cont++;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		a = a * 10 + (*str - 48);
		str++;
	}
	if (cont == 1)
		a = a * -1;
	return (a);
}
