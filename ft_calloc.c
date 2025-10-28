/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:58:12 by misousa           #+#    #+#             */
/*   Updated: 2025/10/28 13:32:05 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memset(void *ptr, int i, unsigned int n)
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (size == 0 || nmemb == 0)
	{
		result = malloc(1);
		return (result);
	}
	result = malloc(nmemb * size);
	ft_memset(result, 0, (nmemb * size));
	return (result);
}

/* int	main(void)
{
	int		n;
	int	*array;
	int i;

	n = 2;
	i = 0;
	// use calloc function to allocate the memory
	array = (int *)ft_calloc(n, 4);
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
