/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:02:30 by misousa           #+#    #+#             */
/*   Updated: 2025/10/26 16:59:06 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char *set)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	result = malloc(ft_strlen(s1) - ft_strlen(set) + 1);
	while (s1[i] != '\0')
	{
		k = 0;
		while (set[k] == '\0')
		{
			if (set[k] == s1[i])
				break ;
			k++;
		}
		if (set[k] != s1[i])
		{
			result[j] = s1[i];
			j++;
		}
		i++;
	}
	return (result);
}

int	main(void)
{
	char *s1;
	char *set;
	char *result;

	s1 = "-|bcdedefghijab|-";
	set = "-|";
	result = ft_strtrim(s1, set);

	printf("%s\n", result);
}