/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 19:06:49 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/09/02 20:09:38 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h> /*read()*/
# include <fcntl.h> /*open()*/
# include <stdlib.h> /*malloc and free*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef MAX_FD
#  define MAX_FD 1024/*OPEN_MAX deprecated. ulimit -n says 1024*/
# endif

char	*get_next_line(int fd);
/*	Part 2: functions at get_next_line_utils.c	*/
size_t	strlen_gnl(const char *str);/*			normal	strlen	*/
char	*end_line(const char *s);/*	like strchr but only for \n	*/
void	*memcpy_line(void *dest, const void *src, size_t len);/*memcpy	*/
char	*dup_line(const char *aux);/*				strdup	*/
char	*join_line(char *line, char *buffer);/*			strjoin	*/

#endif
