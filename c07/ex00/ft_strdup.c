/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 10:51:25 by locholet          #+#    #+#             */
/*   Updated: 2019/09/15 14:37:39 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	j;
	char*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(dest = malloc(sizeof(char) * i)))
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
		i--;
	}
	dest[j] = '\0';
	return (dest);
}
