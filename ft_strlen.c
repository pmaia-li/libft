/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:31:07 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/05 12:26:08 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		str++;
		num++;
	}
	return (num);
}
