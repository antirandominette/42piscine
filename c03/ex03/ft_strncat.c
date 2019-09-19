/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 16:22:48 by locholet          #+#    #+#             */
/*   Updated: 2019/09/05 17:29:21 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	if (dest[i] == '\0')
	{
		while (src[n] != '\0' && n < nb)
		{
			dest[i] = src[n];
			i++;
			n++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
