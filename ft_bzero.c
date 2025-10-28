/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:59:45 by misousa           #+#    #+#             */
/*   Updated: 2025/10/28 13:32:23 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char			*nptr;

	count = 0;
	while (count < n)
	{
		nptr = s;
		*nptr = '\0';
		s++;
		count++;
	}
}

/* int main()
{
	char str[10] = "ABCDEFGHI";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	ft_bzero(str+2, 4*sizeof(char));

	printf("After memset():  %s\n", str);
	return (0);
}  */