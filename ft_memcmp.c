/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:16:56 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/11/05 17:30:11 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cstr1;
	const unsigned char	*cstr2;
	size_t		i;

	cstr1 = (const unsigned char*)s1;
	cstr2 = (const unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (cstr1[i] != cstr2[i])
			return (cstr1[i] - cstr2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char str1[] = "412523";
	char str2[] = "44523";

	int result = memcmp(str1, str2, 3);
	int result2 = memcmp(str1, str2, 3);

	printf("ft_memcmp: %i\n", result);
	printf("memcmp: %i\n", result2);
} */