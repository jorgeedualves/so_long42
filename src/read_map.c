/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:08:56 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 15:37:18 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**read_map(char *path_to_file)
{
	int		fd;
	char	*line;
	char	*buffer;
	char	*tmp;
	char	**map;

	fd = open(path_to_file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buffer = ft_strdup("");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		tmp = buffer;
		buffer = ft_strjoin(tmp, line);
		ft_super_free((void *)&tmp);
		ft_super_free((void *)&line);
	}
	map = ft_split(buffer, '\n');
	ft_super_free((void *)&buffer);
	close(fd);
	return (map);
}
