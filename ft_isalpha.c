/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypratap- <ypratap-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:31:14 by ypratap-          #+#    #+#             */
/*   Updated: 2022/02/05 13:32:00 by ypratap-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if (character <= 'Z' && character >= 'A')
	{
		return (1);
	}
	else if (character <= 'z' && character >= 'a')
	{
		return (1);
	}
	else
		return (0);
}
