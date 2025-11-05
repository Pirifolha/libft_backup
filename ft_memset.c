/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:37:07 by misousa           #+#    #+#             */
/*   Updated: 2025/11/05 17:55:55 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*nptr;

	i = 0;
	nptr = (unsigned char*)s;
	while (i < n)
	{
		nptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char str[10] = "asddasdasd";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	// ft_memset(str + 8, 'n', 4*sizeof(char));
	ft_memset(str, 'p', 10 * sizeof(char));

	printf("After memset():  %s", str);
	return (0);
} */