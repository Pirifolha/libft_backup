/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:32:14 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/24 15:58:40 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <strings.h> */

const char	*ft_strrchr(const char *str, int ch)
{
	char	c;
	int		i;

	i = 0;
	c = ch;
	while (*str != '\0')
	{
		if (*str == c)
			i++;
		str++;
	}
	if (i == 0)
		return ("(null)");
	while (*str != c)
	{
		str--;
	}
	return (str);
}

/* int	main(void)
{
	char *str = "addcdfakkasdoadsnvdkjsvdnssdifsodjfidfjsfddjsg";

	char ch = 'e';

	printf("%s\n", ft_strrchr(str, ch));
} */