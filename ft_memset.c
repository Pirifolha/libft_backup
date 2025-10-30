/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:37:07 by misousa           #+#    #+#             */
/*   Updated: 2025/10/30 18:15:14 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;
	unsigned char	*nptr;

	count = 0;
	nptr = s;
	*nptr = c;
	while (count < n)
	{
		s++;
		count++;
	}
	return ((void *)s);
}

/* int main()
{
	char str[10] = "ABCDEFGHI";
	char *res;
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	res = ft_memset("", 'A', 0);

	printf("After memset():  %s", res);
	return (0);
} */