/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:25:43 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/04/15 13:27:57 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*calloc;
	size_t	total;
	int		i;

	i = 0;
	total = count * size;
	calloc = malloc(total);
	if (!calloc)
		return (0);
	while (total--)
		calloc[i++] = '\0';
	return ((void *) calloc);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	if (!s1 || !s2)
		return (0);
	str = ft_calloc(ft_strlen((char *) s1) + \
			ft_strlen((char *) s2) + 1, sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (str[i])
		str[i++] = '\0';
	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (i < len)
		str[j++] = s1[i++];
	i = 0;
	len = ft_strlen(s2);
	while (i < len)
		str[j++] = s2[i++];
	free(s1);
	return (str);
}

char	*ft_strdup(const char *str)
{
	char	*dest;
	char	*src;
	int		i;

	src = (char *) str;
	dest = ft_calloc((ft_strlen(src) + 1), sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
