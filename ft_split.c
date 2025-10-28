/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:54:19 by misousa           #+#    #+#             */
/*   Updated: 2025/10/28 16:57:36 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
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
static int	*wordlen(char *s, char c, int words)
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

/* char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	words = count_words(s, c);

	wordlen(s, c, words);

	return
} */

int	main(void)
{
	int *res;
	char *s;
	char c;
	int words;

	s = "----sdkas--ggdfvvfd-regerger--fdggfdfgd------asdd325as=--";
	c = '-';
	words = count_words(s, c);
	res = wordlen(s, c, words);

	for (int i = 0; i < words; i++)
	{
		printf("%d\n", res[i]);
	}
}