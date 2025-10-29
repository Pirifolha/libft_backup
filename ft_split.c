/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:54:19 by misousa           #+#    #+#             */
/*   Updated: 2025/10/29 14:32:26 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c))
			words++;
		i++;
	}
	if (s[--i] != c)
		words++;
	return (words);
}

static int	*wordlen(const char *s, char c, int words)
{
	int	i;
	int	*result;
	int	count;

	i = 0;
	count = 0;
	result = malloc(words * sizeof(int));
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		if ((s[i] != c && s[i + 1] == c))
		{
			result[words] = count;
			words++;
			count = 0;
		}
		i++;
	}
	result[words] = count;
	return (result);
}

static char	**writestr(char **result, char const *s, char c, int *len)
{
	int	i;
	int	j;
	int	k;
	int	words;

	i = 0;
	k = 0;
	words = count_words(s, c);
	while (i < words)
	{
		j = 0;
		while (j < len[i])
		{
			while (s[k] == c)
				k++;
			result[i][j] = s[k];
			j++;
			k++;
		}
		result[i][++j] = '\0';
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		*len;
	int		i;

	i = 0;
	words = count_words(s, c);
	len = wordlen(s, c, words);
	result = malloc(words * sizeof(char *));
	while (i < words)
	{
		result[i] = malloc(len[i] + 1 * sizeof(char));
		i++;
	}
	result = writestr(result, s, c, len);
	return (result);
}

/* int	main(void)
{
	char **res;
	const char *s;
	char c;
	int words;

	s = "sdk-==as--ggdfvvfd-regerger--fdggfdfgd------asdd325as=--";
	c = '-';
	words = count_words(s, c);
	res = ft_split(s, c);

	for (int i = 0; i < words; i++)
	{
		printf("%s\n", res[i]);
	}
	free((void *)res);
} */