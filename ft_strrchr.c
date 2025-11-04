/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:32:14 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/30 20:05:27 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (s[i] != c)
	{
		i--;
	}
	if (i == 0)
		return (0);
	return (s + i);
}

int	main(void)
{
	char *str = "addcdfakka\0sdoaedsnvdk\0jsvdnssdifsodjfidefjs\0fdejsg";
	int c = 'k';
	const char *res = ft_strrchr(str, c);
	const char *res2 = strrchr(str, c);

	printf("%s\n", res);
	printf("%s\n", res2);
}