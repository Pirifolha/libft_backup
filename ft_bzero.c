/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:59:45 by misousa           #+#    #+#             */
/*   Updated: 2025/10/26 07:56:48 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *ptr, unsigned int n)
{
	unsigned int	count;
	char			*nptr;

	count = 0;
	while (count < n)
	{
		nptr = ptr;
		*nptr = '\0';
		ptr++;
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