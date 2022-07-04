/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahraou <mdahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:59:35 by mdahraou          #+#    #+#             */
/*   Updated: 2022/07/02 22:46:52 by mdahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)str;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
	str = temp;
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*array;

	if ((nitems == SIZE_MAX && size > 1) || (size == SIZE_MAX && nitems > 1))
		return (NULL);
	array = malloc(size * nitems);
	if (!array)
		return (NULL);
	ft_bzero(array, size * nitems);
	return (array);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		sizetotal;
	char	*res;
	int		i;
	int		j;

	i = 0;
	sizetotal = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (sizetotal + 1));
	if (!res || !s1 || !s2)
		return (free(s1), NULL);
	while (s1[i] != 0)
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[sizetotal] = 0;
	free(s1);
	return (res);
}

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (*(char *)(str + i) == (char)c)
			return ((char *)(&str[i]));
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)(&str[i]));
	return (NULL);
}
