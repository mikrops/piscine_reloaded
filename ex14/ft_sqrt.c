/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 00:35:48 by mmonahan          #+#    #+#             */
/*   Updated: 2018/11/24 01:08:43 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	a = 0;
	if (nb <= 0)
		return (0);
	while (a * a < nb)
		a++;
	if (a * a == nb)
		return (a);
	return (0);
}