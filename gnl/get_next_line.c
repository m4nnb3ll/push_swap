/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:47:35 by abelayad          #+#    #+#             */
/*   Updated: 2022/12/25 14:34:43 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/get_next_line.h"

int	_contains_nl(const char *str)
{
	while (*str++)
		if (*(str - 1) == '\n')
			return (1);
	return (0);
}

/*
types:
  1: get the first line
  0: get what is after the first line
*/
char	*_get_line(char *stash, int first_line)
{
	int		i;
	char	*ptr2free;

	i = 0;
	while (stash[i] != '\n')
		++i;
	if (first_line)
		return (ft_substr(stash, 0, i + 1));
	ptr2free = stash;
	stash = ft_substr(stash, i + 1, ft_strlen(stash) - (i + 1));
	free(ptr2free);
	return (stash);
}

char	*_free_and_return(char *to_free, char *to_return)
{
	free(to_free);
	return (to_return);
}

char	*_handler(char *stash, int fd)
{
	char	*buff;
	ssize_t	read_sig;

	if (!stash)
	{
		stash = ft_strjoin("", "");
		if (!stash)
			return (NULL);
	}
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	buff[BUFFER_SIZE] = 0;
	while (!_contains_nl(stash))
	{
		read_sig = read(fd, buff, BUFFER_SIZE);
		if (read_sig <= 0)
			break ;
		while (read_sig < BUFFER_SIZE)
			buff[read_sig++] = 0;
		stash = _free_and_return(stash, ft_strjoin(stash, buff));
	}
	return (_free_and_return(buff, stash));
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*str2ret;

	stash = _handler(stash, fd);
	if (!ft_strlen(stash))
	{
		stash = _free_and_return(stash, NULL);
		return (stash);
	}
	if (!_contains_nl(stash))
	{
		str2ret = _free_and_return(stash, ft_strjoin("", stash));
		stash = NULL;
		return (str2ret);
	}
	str2ret = _get_line(stash, 1);
	stash = _get_line(stash, 0);
	return (str2ret);
}
