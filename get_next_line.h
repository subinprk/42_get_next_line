/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:27:15 by subpark           #+#    #+#             */
/*   Updated: 2023/06/14 16:37:37 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_strdup(const char *s);
int		merging(char *buff, char **str, int start, int index);
int		ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

#endif