/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:53:45 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/26 07:56:35 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <strings.h> */

const char	*ft_strchr(const char *str, int ch)
{
	char	c;

	c = ch;
	while (*str != c)
	{
		if (*str == '\0')
			return ("(null)");
		str++;
	}
	return (str);
}

/* int    main(void)
{
	char *str = "abcdfg";

	char ch = 'e';

	printf("%s\n", ft_strchr(str, ch));
} */