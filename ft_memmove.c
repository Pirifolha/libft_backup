/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:30:01 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/26 11:05:42 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *to, const void *from, unsigned int n)
{
	char		*cto;
	const char	*cfrom;

	cto = to + n;
	cfrom = from + n;
	while (n > 0)
	{
		cto--;
		cfrom--;
		*cto = *cfrom;
		n--;
	}
	return (to);
}

/* int	main(void)
{
	char str[20] = "Learningisfun";
	char *first, *second;
	first = str;
	second = str;
	printf("Original string :%s\n ", str);

	// when overlap it start from first position
	ft_memmove(second + 8, first, 10);
	//memmove(second + 8, first, 10);
	printf("memmove overlap : %s\n ", str);

	char str2[] = "abcdef";
	ft_memmove(str2 + 2, str2, 4);
	printf("%s\n", str2);

	return (0);
} */