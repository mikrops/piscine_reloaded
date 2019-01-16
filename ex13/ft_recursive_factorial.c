/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 00:19:10 by mmonahan          #+#    #+#             */
/*   Updated: 2018/11/24 00:19:15 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int answer;

	answer = 0;
	if (nb < 0 || nb > 12)
		answer = 0;
	else if (nb == 1 || nb == 0)
		answer = 1;
	else
		answer = ft_recursive_factorial(nb - 1) * nb;
	return (answer);
}
