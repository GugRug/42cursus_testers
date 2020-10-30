/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <gumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 22:40:52 by hcastanh          #+#    #+#             */
/*   Updated: 2020/10/20 07:50:18 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
int		isbarran(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*cleanline(char **line, char *s_line);
size_t	ft_strlen(char *str);
void	ft_bzero(char *str);
char	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

#endif
