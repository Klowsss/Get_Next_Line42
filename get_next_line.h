/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:46:54 by btiza             #+#    #+#             */
/*   Updated: 2023/10/30 22:09:07 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

#  include <fcntl.h>
#  include <stdio.h>
#  include <stdlib.h>
#  include <unistd.h>
#  include <stdlib.h>
#  include <stddef.h>

int		ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
char    *ft_strchr(const char *s, int c);
void    ft_bzero(void *p, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);

# endif

#endif
