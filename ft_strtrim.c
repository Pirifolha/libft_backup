/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:02:30 by misousa           #+#    #+#             */
/*   Updated: 2025/10/28 15:18:09 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char *set)
{
	char	*result;
	int		i;
	int		start;
	int		end;

	i = 0;
	end = ft_strlen(s1);
	while (checkset(set, s1[i]) == 1)
		i++;
	start = i;
	while (checkset(set, s1[end - 1]) == 1)
		end--;
	result = malloc(end - start + 1);
	i = 0;
	while (start < end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}

/* int	main(void)
{
	char *s1;
	char *set;
	char *result;

	s1 = "-|-|-|bcdede|fghijab|-";
	set = "-|";
	result = ft_strtrim(s1, set);

	printf("%s\n", result);
} */