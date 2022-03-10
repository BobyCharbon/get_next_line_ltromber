/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:20:57 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/02/05 12:31:29 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../libft_ltromber/libft/libft.h"

# include <stdarg.h>
# include <stdlib.h>

# include <unistd.h>
# include <stddef.h>

typedef struct s_line
{
	char	str[BUFFER_SIZE];
	int		fd;
	int		maxline;
	int		pos;
}	t_read;
#endif