/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:13:59 by locholet          #+#    #+#             */
/*   Updated: 2019/09/14 15:32:49 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = NULL;
	if (min >= max)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
