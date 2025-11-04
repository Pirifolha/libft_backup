/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:31:39 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/11/04 18:47:20 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *result;

	i = 0;
	result = malloc(ft_strlen(s) * sizeof(char));
	if (!result)
		return (0);

	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}

	return (result);
}