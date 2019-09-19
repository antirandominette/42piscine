/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locholet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:14:59 by locholet          #+#    #+#             */
/*   Updated: 2019/09/19 14:34:00 by locholet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_find_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int		ft_count_words(char *str, char *charset)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if ((ft_find_charset(str[i], charset) == 0 &&
					ft_find_charset(str[i + 1], charset) == 1))
			words++;
		i++;
	}
	return (words);
}

void	ft_copy_words(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (ft_find_charset(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_transfer_to_tab(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_find_charset(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_find_charset(str[i + j], charset) == 0)
				j++;
			tab[word] = (char *)malloc(sizeof(char) * (j + 1));
			ft_copy_words(tab[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		word;

	word = ft_count_words(str, charset);
	if ((tab = (char **)malloc(sizeof(char *) * (word + 1))) == NULL)
		return (NULL);
	tab[word] = 0;
	ft_transfer_to_tab(tab, str, charset);
	return (tab);
}
