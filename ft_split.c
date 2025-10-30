/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:54:19 by misousa           #+#    #+#             */
/*   Updated: 2025/10/30 16:17:46 by misousa          ###   ########.fr       */
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
	if (result == 0)
		return (0);
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
	if (s[--i] != c)
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
		result[i][j] = '\0';
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
	if (result == 0)
		return (0);
	while (i < words)
	{
		result[i] = malloc(len[i] + 1 * sizeof(char));
		if (result == 0)
			return (0);
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

	s = "\0aa\0bbb";
	c = '\0';
	words = count_words(s, c);
	res = ft_split(s, c);

	for (int i = 0; i < words; i++)
	{
		printf("%s\n", res[i]);
	}
	free((void *)res);
} */