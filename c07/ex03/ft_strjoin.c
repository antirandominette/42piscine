/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:59:24 by locholet          #+#    #+#             */
/*   Updated: 2019/09/16 11:20:53 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
		dest[i++] = src[n++];
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen_strs(char **strs, int size)
{
	int i;
	int j;
	int len;

	i = -1;
	len = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		s;
	int		j;
	char	*temp;

	temp = NULL;
	j = ft_strlen(sep) * (size - 1);
	s = ft_strlen_strs(strs, size);
	if (!(temp = malloc(sizeof(char) * (s + j + 1))))
		return (NULL);
	j = s + j;
	while (j >= 0)
		temp[j--] = 0;
	if (size <= 0)
		return (temp);
	j = -1;
	while (++j < size)
	{
		ft_strcat(temp, strs[j]);
		if (j < size - 1)
			ft_strcat(temp, sep);
	}
	return (temp);
}
