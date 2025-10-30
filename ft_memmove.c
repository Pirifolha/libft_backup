/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:30:01 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/30 17:22:20 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*to;
	const char	*from;

	to = dest + n;
	from = src + n;
	if (!dest && !src)
		return (0);
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
	char dst1[0xF0];
	char dst2[0xF0];
	char *data = "thiÃ Ã\xde\xad\xbe\xeftriÃ±g will be ÃžvÃ©rlapÃ©d !\r\n";
	int size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));
	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	memmove(dst1, dst1 + 3, size);
	ft_memmove(dst2, dst2 + 3, size);

	return (0);
} */