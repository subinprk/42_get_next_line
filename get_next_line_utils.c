/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:20:31 by subpark           #+#    #+#             */
/*   Updated: 2023/06/12 18:26:20 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	int		index;

	if (s == NULL)
		return (NULL);
	index = 0;
	str = (char *) malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[index] != '\0')
	{
		str[index] = s[index];
		index ++;
	}
	str[index] = 0;
	return (str);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		t1;
	size_t		t2;

	i = 0;
	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	if (size <= t1)
		return (size + t2);
	while (dst[i] && i < size - 1)
		i ++;
	while (src[i - t1] && i < size - 1)
	{
		dst[i] = src[i - t1];
		i ++;
	}
	dst[i] = 0;
	return (t1 + t2);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			index;

	str = s;
	index = 0;
	while (index < n)
	{
		*(str + index) = 0;
		index ++;
	}
	return ;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = (char *) malloc (size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (size * nmemb));
	return ((void *)ptr);
}
/*
char    *put_in_buffer(int fd, char *buffer)
{
	int		count;

	count = 0;
	read(fd, buffer, BUFFER_SIZE - 1);
	buffer[BUFFER_SIZE - 1] = '\0';
	return (buffer);
}

int	savewithprv(char *((*buff)[3]), int index, int fd)
{
	if (*(buff[1]) == NULL)
	{
		*(buff[1])= ft_strdup(*(buff[0]));
		if (!*(buff[1]))
				return (0);
	}
	else
	{
		*(buff[2])= ft_strdup(*(buff[1]));
		if (!*(buff[2]))
			return (0);
		ft_bzero(buff[1], ft_strlen(*(buff[1])));
		free(*(buff[1]));
		*(buff[1]) = (char *)malloc(ft_strlen(*(buff[2])) + index + 1);
		if (!*(buff[1]))
		{
			free(*(buff[2]));
			return (0);
		}
		ft_bzero(buff[1], ft_strlen(*(buff[2])) + index + 1);
		ft_strlcat(*(buff[1]), *(buff[2]), ft_strlen(*buff[2]) + 1);
		ft_strlcat(*(buff[1]), *(buff[0]), index + 1);
		ft_bzero(*buff[2], ft_strlen(*(buff[2])));
		free(*(buff[2]));
		put_in_buffer(fd, *(buff[0]));
		printf("times ");
		return (1);
	}
	return (1);
}
*/
/*if (*buff[1] != NULL)
	{
		(*buff)[2] = ft_strdup((*buff)[2]);
		if(!*((*buff)[2]))
			return (0);
		free((*buff)[1]);
		(*buff)[1] = (char *)malloc(ft_strlen((*buff)[2])
								+ index + 1);
		if(!*((*buff)[1]))
		{
			free((*buff)[2]);
			return (0);
		}
		(*buff)[1][0] = '\0';
		ft_strlcat((*buff)[1], (*buff)[2], ft_strlen((*buff)[2]) + 1);
		ft_strlcat((*buff)[1], (*buff)[0], ft_strlen((*buff)[0])
								+ index + 1);
		free((*buff)[2]);
	}
	else
	{
		(*buff)[1] = ft_strdup((*buff)[0]);
		if(!*((*buff)[1]))
			return (0);
	}
	(*buff)[0] = put_in_buffer(fd, (*buff)[0]);
	return (1);*/