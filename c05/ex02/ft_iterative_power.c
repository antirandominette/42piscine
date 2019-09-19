/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:37:17 by locholet          #+#    #+#             */
/*   Updated: 2019/09/10 16:23:16 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int x;

	i = 0;
	x = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ < (power - 1))
		x = x * nb;
	return (x);
}
