/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:56:06 by locholet          #+#    #+#             */
/*   Updated: 2019/09/09 17:04:15 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int	j;
	int k;

	k = 0;
	j = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' ||
			str[i] == '\r' ||
			str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = j * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		k = k * 10 + str[i] - '0';
		i++;
	}
	return (k * j);
}
