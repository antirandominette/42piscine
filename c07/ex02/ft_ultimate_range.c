/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:28:38 by locholet          #+#    #+#             */
/*   Updated: 2019/09/19 10:27:10 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*range_i;
	int	i;

	range_i = NULL;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(range_i = malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (min < max)
	{
		range_i[i] = min;
		min++;
		i++;
	}
	*range = range_i;
	return (i);
}
