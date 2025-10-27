/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:45:24 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/24 15:59:03 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <strings.h>*/

void	*ft_memchr(void *to, int value, unsigned int size)
{
	char			*cto;
	char			c;
	unsigned int	count;

	c = value;
	cto = to;
	count = 0;
	while (*cto != c && count < size)
	{
		cto++;
		to++;
		count++;
	}
	return (to);
}

/* int main ()
{
	char *str = "adsdasovvk";
	char c = 's';
	int s = 20;

	char *res = ft_memchr(str, c, s);

	printf("%s\n", res);
} */