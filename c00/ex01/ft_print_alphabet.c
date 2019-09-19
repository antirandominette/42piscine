/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:21:57 by locholet          #+#    #+#             */
/*   Updated: 2019/08/30 11:25:21 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	i;

	i = a;
	while (i <= z)
	{
		ft_putchar(i);
		i++;
	}
}

int		main()
{
	char c;
	ft_putchar(c);
	ft_print_alphabet();
	return (0);
}
