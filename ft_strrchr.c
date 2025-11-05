/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:32:14 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/11/05 18:23:20 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if (!s)
		return (0);
	while (s[i] != c && i >= 0)
		i--;
	if (s[i] == c)
		return ((char *)s + i);
	return (0);
}

/* int	main(void)
{
	char *str = "\0";
	int c = 'a';
	const char *res = ft_strrchr(str, c);
	const char *res2 = strrchr(str, c);

	printf("%s\n", res);
	printf("%s\n", res2);
} */