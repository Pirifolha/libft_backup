/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:32:14 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/28 13:45:57 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;

	i = 0;
	ch = c;
	while (*s != '\0')
	{
		if (*s == ch)
			i++;
		s++;
	}
	if (i == 0)
		return (0);
	while (*s != ch)
	{
		s--;
	}
	return (s);
}

/* int	main(void)
{
	char *str = "addcdfakkasdoadsnvdkjsvdnssdifsodjfidfjsfddjsg";

	char ch = 'e';

	printf("%s\n", ft_strrchr(str, ch));
} */