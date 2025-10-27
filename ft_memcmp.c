/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:16:56 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/24 15:59:01 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <strings.h> */

int	ft_memcmp(void *str1, void *str2, unsigned int n)
{
	char			*cstr1;
	char			*cstr2;
	unsigned int	i;

	cstr1 = str1;
	cstr2 = str2;
	i = 0;
	while (i < n)
	{
		i++;
		cstr1++;
		cstr2++;
		if (*cstr1 > *cstr2)
			return (*cstr1 - *cstr2);
		if (*cstr1 < *cstr2)
			return (*cstr2 - *cstr1);
	}
	return (0);
}

/* int	main(void)
{
	char str1[] = "12345678901400345678";
	char str2[] = "1234567";

	int result = ft_memcmp(str1, str2, 10);

	printf("%i\n", result);
} */