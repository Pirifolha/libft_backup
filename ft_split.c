/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:54:19 by misousa           #+#    #+#             */
/*   Updated: 2025/10/28 13:52:07 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

/* char	**ft_split(char const *s, char c)
{
	char **result;

	count_words(s, c);
} */

int	main(void)
{
	int res;
	char *s;
	char c;

	s = "asdkasd-ggdfvvfd-regerger";
	c = '-';

	res = count_words(s, c);

	printf("%d\n", res);
}