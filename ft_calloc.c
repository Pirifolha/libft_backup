/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:58:12 by misousa           #+#    #+#             */
/*   Updated: 2025/10/26 12:46:10 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *ptr, int i, unsigned int n)
{
	unsigned int	count;
	char			*nptr;

	count = 0;
	while (count < n)
	{
		nptr = ptr;
		*nptr = i;
		ptr++;
		count++;
	}
	return (0);
}

void	*ft_calloc(unsigned int n, unsigned int size)
{
	void	*result;

	if (size == 0 || n == 0)
	{
		result = malloc(1);
		return (result);
	}
	result = malloc(n * size);
	ft_memset(result, 0, (n * size));
	return (result);
}

/* int	main(void)
{
	int		n;
	int	*array;
	int i;

	n = 0;
	i = 0;
	// use calloc function to allocate the memory
	array = (int *)ft_calloc(n, 0);
	// Display the array value
	printf("Array elements after calloc: ");
	while (i < n)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	// free the allocated memory
	free(array);
	return (0);
} */
