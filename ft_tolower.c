/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:42:07 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/24 15:58:37 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_tolower(int c)
{
	if (c > 64 && c < 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}

/* int main ()
{
	char a = 'o';
	char A = ft_tolower(a);

	printf("%c\n", A);
} */