/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:37:07 by misousa           #+#    #+#             */
/*   Updated: 2025/10/26 08:14:48 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* int main()
{
	char str[10] = "ABCDEFGHI";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	ft_memset(str + 3, 'L', 4*sizeof(char));

	printf("After memset():  %s", str);
	return (0);
} */