/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:04:13 by misousa           #+#    #+#             */
/*   Updated: 2025/10/26 11:07:30 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* int	main(void)
{
	char dest[6] = "hello2";
	char src[] = "world1";
	unsigned int size;
	unsigned int a;

	size = 6;
	a = ft_strlcat(dest, src, size);
	printf("%d", a);
	printf("\n");

	char x[6] = "hello2";
	char y[] = "world1";
	unsigned int z;

	z = 6;
	a = strlcat(x, y, z);
	printf("%d", a);
	printf("\n");
	printf("%s", x);
} */