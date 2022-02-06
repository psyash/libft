/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypratap- <ypratap-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:30:55 by ypratap-          #+#    #+#             */
/*   Updated: 2022/02/06 14:38:06 by ypratap-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str;
	char	*dest;

	str = (char *) src;
	dest = (char *) dst;
	if (str < dest)
	{
		while (len--)
		{
			dest[len] = str[len];
		}
	}
	else
		ft_memcpy(dest, str, len);
	return (dst);
}
