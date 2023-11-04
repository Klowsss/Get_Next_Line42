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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*line_extract(int fd, static int stach)
{
	int	buffer;

	if (buffer == '\n')
	{
		ft_strdup(fd, buffer, 5);	
}

char	*read_content(int files, void *buff, size_t nbyte)
{
	static int	stach;
	
	stach = read(files, buff, nbyte);
	
}

char	*get_next_line(int fd)
{

}
