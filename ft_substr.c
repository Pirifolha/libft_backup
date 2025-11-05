/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:13:02 by misousa           #+#    #+#             */
/*   Updated: 2025/11/05 18:20:46 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		result = malloc(1);
		if (result == 0)
			return (0);
		result[start] = '\0';
		return (result);
	}
	result = malloc(len + 1);
	if (result == 0)
		return (0);
	while (i < len)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* int	main(void)
{
	char *s;
	char *result;
	int i;

	s = "01234";
	i = 10;
	result = ft_substr(s, i, 10);

	printf("This is the sub string: %s\n", result);
	free(result);
} */