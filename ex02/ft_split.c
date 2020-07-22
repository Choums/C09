/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:42:21 by caidel            #+#    #+#             */
/*   Updated: 2020/07/22 19:43:14 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int		count_words(char *str, char *charset)
{
	int	n;

	n = 0;
	while (is_sep(*str, charset) == 0 && *str)
		str++;
	while (*str)
	{
		n++;
		while (*str && is_sep(*str, charset) == 1)
			str++;
		while (is_sep(*str, charset) == 0 && *str)
			str++;
	}
	return (n);
}

char	*dup_word(char *str, char *charset)
{
	int		i;
	int		t;
	char	*word;

	i = 0;
	t = 0;
	while (str[t] && is_sep(str[t], charset) == 1)
		t++;
	if (!(word = malloc(sizeof(*word) * (t + 1))))
		return (0);
	word[t] = '\0';
	while (i < t)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

void	put_words(char **splot, char *str, char *charset)
{
	int index;

	index = 0;
	while (is_sep(*str, charset) == 0 && *str)
		str++;
	while (*str)
	{
		splot[index] = dup_word(str, charset);
		index++;
		while (is_sep(*str, charset) == 1 && *str)
			str++;
		while (is_sep(*str, charset) == 0 && *str)
			str++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		n_words;
	char	**splot;

	n_words = count_words(str, charset);
	if (!(splot = malloc(sizeof(*splot) * (n_words + 1))))
		return (0);
	splot[n_words] = 0;
	put_words(splot, str, charset);
	return (splot);
}
