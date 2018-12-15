/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <lwyl-the@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 11:29:24 by rgyles            #+#    #+#             */
/*   Updated: 2018/12/15 14:34:24 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_delete_map(char **map)
{
	ft_bzero(*map, ft_strlen(*map));
	free(*map);
	*map = NULL;
}

char		*ft_create_map(int size)
{
	char	*map;
	size_t	length;
	size_t	i;

	i = 0;
	length = size * (size + 1);
	map = ft_strnew(length);
	map = ft_memset(map, '.', length);
	i += size;
	map[i] = '\n';
	while (i <= length)
	{
		i += size + 1;
		map[i] = '\n';
	}
	return (map);
}
