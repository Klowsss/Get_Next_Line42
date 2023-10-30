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

int	ft_strlen(char *str)
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

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = ft_strlen(s);
	dest = malloc((size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*total_len;
	size_t	i;
	size_t	j;
	size_t	s_len;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	total_len = malloc(sizeof(char) * (len + 1));
	if (!total_len)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		total_len[j] = s[i];
		j++;
		i++;
	}
	total_len[j] = '\0';
	return (total_len);
}	
