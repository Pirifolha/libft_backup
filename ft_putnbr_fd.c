/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:24:20 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/11/04 17:27:24 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		c = nb % 10 + '0';
		ft_putnbr_fd(nb /= 10, fd);
	}
	else
		c = nb % 10 + '0';
	write(fd, &c, 1);
}

/* int	main(void)
{
	ft_putnbr_fd(INT_MIN, 1);
} */
