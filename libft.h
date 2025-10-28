/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:06:02 by misousa           #+#    #+#             */
/*   Updated: 2025/10/28 13:40:36 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int		ft_atoi(char *str);
void	*ft_memset(void *ptr, int i, size_t n);
char	*ft_strtrim(char const *s1, char *set);
size_t	ft_strlen(const char *s);

#endif