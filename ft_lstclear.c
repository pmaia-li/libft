/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:12:33 by pmaia-li          #+#    #+#             */
/*   Updated: 2022/12/07 11:26:48 by pmaia-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	if (!lst)
		return ;
	if (!del)
		return ;
	while (*lst)
	{
		i = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = i;
	}
}
