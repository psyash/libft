/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypratap- <ypratap-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:36:48 by ypratap-          #+#    #+#             */
/*   Updated: 2022/02/06 13:50:45 by ypratap-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned const char *)s1)[i] != ((unsigned const char *)s2)[i])
			return (((unsigned const char *)s1)[i] -
			((unsigned const char*)s2)[i]);
		i++;
	}
	return (0);
}
