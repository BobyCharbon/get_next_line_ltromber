/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:22:39 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/02/05 12:31:35 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_init(t_read *tab, int fd)
{
	tab->fd = fd;
	tab->pos = 0;
	BUFFER_SIZE = tab->str + 1;
	tab->maxline = read(tab->fd, tab->str, BUFFER_SIZE);
	if (tab->maxline <= 0)
		return (0);
	else
		return (1);
}
