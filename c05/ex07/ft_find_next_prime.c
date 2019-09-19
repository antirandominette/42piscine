/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:27:10 by locholet          #+#    #+#             */
/*   Updated: 2019/09/17 15:26:26 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 0 || nb == 1 || nb == 4)
		return (0);
	while (i < (nb / 2) && i < 46341)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (nb < 0)
		return (2);
	while (i <= 2147483647)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	printf("%d", ft_find_next_prime(atoi(av[1])));
	return (0);
}
