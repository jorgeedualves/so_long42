/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:08:56 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/07 00:27:14 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**read_map(char *path_to_file)
{
	char *line;
	int fd;
	char **map;
	char *buffer;

	fd = open(path_to_file, O_RDONLY);
	if(fd == -1)
	{
		ft_putstr_fd("Mapa não pode ser lido", fd);
		return(NULL);
	}
	buffer = ft_strdup("");
	while(ft_get_next_line(fd, &line))
	{
		buffer = ft_strjoin(buffer, line);
		buffer = ft_strjoin(buffer, "\n");
		ft_super_free((void *)&line);
	}
	buffer = ft_strjoin(buffer, line);
	map = ft_split(buffer, '\n');
	ft_super_free((void *)&buffer);
	ft_super_free((void *)&line);
	close(fd);
	return(map);
}
