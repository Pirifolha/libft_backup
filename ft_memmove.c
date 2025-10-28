/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:30:01 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/28 13:22:39 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*to;
	const char	*from;

	to = dest + n;
	from = src + n;
	while (n > 0)
	{
		to--;
		from--;
		*to = *from;
		n--;
	}
	return (dest);
}

/* int	main(void)
{
	char str[20] = "Learningisfun";
	char *first, *second;
	first = str;
	second = str;
	printf("Original string :%s\n ", str);

	ft_memmove(second + 8, first, 10);
	//memmove(second + 8, first, 10);
	printf("memmove overlap : %s\n ", str);

	char str2[] = "abcdef";
	ft_memmove(str2 + 2, str2, 4);
	printf("%s\n", str2);

	return (0);
} */