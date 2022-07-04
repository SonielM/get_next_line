/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahraou <mdahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:59:30 by mdahraou          #+#    #+#             */
/*   Updated: 2022/07/02 22:35:17 by mdahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
char	*get_next_line(int fd);
char	*get_buffer(int fd, char *buffer);
char	*get_the_rest(char *buffer);
#endif