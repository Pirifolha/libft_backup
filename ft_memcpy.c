/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:21:32 by misousa           #+#    #+#             */
/*   Updated: 2025/10/28 13:26:58 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char			*cdest;
	const char		*csrc;

	i = 0;
	cdest = dest;
	csrc = src;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
/* int	main(void)
{
	int a = 20;
	int b = 10;
	int c = 20;
	int d = 10;

	printf("Value of b before calling ft_memcpy: %d\n", b);
	printf("Value of b before calling memcpy: %d\n", d);
	ft_memcpy(&b, &a, sizeof(int));
	memcpy(&d, &c, sizeof(int));

	printf("Value of b after calling ft_memcpy: %d\n", b);
	printf("Value of b before calling memcpy: %d\n", d);

	return 0;
} */