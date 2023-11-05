/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:46:05 by btiza             #+#    #+#             */
/*   Updated: 2023/10/30 20:16:03 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ts1;
	int		ts2;
	char	*total_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ts1 = ft_strlen(s1);
	ts2 = ft_strlen(s2);
	total_len = malloc(sizeof(char) * ((ts1 + ts2) + 1));
	if (!total_len)
		return (NULL);
	while (s1[i] != '\0')
	{
		total_len[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		total_len[i++] = s2[j++];
	total_len[i] = '\0';
	return (total_len);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}

void	ft_bzero(void *p, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(p + i) = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*total_size;

	total_size = malloc(size * nmemb);
	if (!total_size)
		return (NULL);
	ft_bzero(total_size, size * nmemb);
	return (total_size);
}

	
