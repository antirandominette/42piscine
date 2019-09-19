/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:16:55 by locholet          #+#    #+#             */
/*   Updated: 2019/09/19 17:11:20 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	else
		while (base[i])
		{
			if (base[i] == '+' || base[i] == '-')
				return (0);
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
			i++;
			j = i + 1;
		}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int long_nbr;

	long_nbr = nbr;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			long_nbr = long_nbr * -1;
			ft_putchar('-');
		}
		if (long_nbr >= ft_strlen(base))
		{
			ft_putnbr_base(long_nbr / ft_strlen(base), base);
			ft_putnbr_base(long_nbr % ft_strlen(base), base);
		}
		else
			ft_putchar(base[long_nbr]);
	}
}
