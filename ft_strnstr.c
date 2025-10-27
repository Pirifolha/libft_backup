/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:43:08 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/26 07:56:42 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char *str1 = "abcsadefdsf";
	char *str2 = "adef";

	printf("%s\n", ft_strnstr(str1, str2, 7));
} */