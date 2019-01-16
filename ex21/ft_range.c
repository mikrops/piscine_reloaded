/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 06:27:16 by mmonahan          #+#    #+#             */
/*   Updated: 2018/11/24 06:27:53 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	mid;
	int	*ofint;
	int	i;

	if (min >= max)
		return (NULL);
	mid = max - min;
	i = 0;
	ofint = (int *)malloc(sizeof(int) * mid);
	while (i < mid)
	{
		ofint[i] = min + i;
		i++;
	}
	return (ofint);
}
