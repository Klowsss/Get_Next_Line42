/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:45:07 by btiza             #+#    #+#             */
/*   Updated: 2023/10/30 21:06:59 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*free_join(char *buffer, char *buffer2)
{
	char	*befree;

	befree = ft_strjoin(buffer, buffer2);
	free(buffer);
	return (befree);
}

char	*next_line(char *buffer)
{
	char	*line;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	line = ft_calloc(ft_strlen(buffer) - i + 1, sizeof(char));
	if (line == NULL)
		return NULL;
	i++;
	j = 0;
	while (buffer[i] != '\0')
	{
		line[j] = buffer[i];
		j++;
		i++;
	}
	free(buffer);
	return (line);
}

char	*new_line(char *buffer)
{
	char	*line;
	int	i;
	
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
                i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (line == NULL)
		return NULL;
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char    *read_content(int fd, char *stach)
{
	int	i;
	char	*buffer;

	i = 0;
	buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	while ((i = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (i == -1)
		{
			free(buffer);
			return NULL;
		}
		if (i == 0)
		{
			free(buffer);
			return NULL;
		}
		buffer[i] = 0;
		stach = free_join(stach, buffer);
		if (ft_strchr(buffer, '\n'))
				break;
	}
	free(buffer);
	return (stach);
}

char	*get_next_line(int fd)
{
	static char *buffer;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = read_content(fd, buffer);
	if (!buffer)
		return NULL;
	line = new_line(buffer);
	buffer = next_line(buffer);
	return (line);
}
