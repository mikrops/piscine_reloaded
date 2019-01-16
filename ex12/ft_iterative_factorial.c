/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 23:08:18 by mmonahan          #+#    #+#             */
/*   Updated: 2018/11/24 00:26:22 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int answer;
	int i;

	answer = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		answer = 0;
	else if (nb == 1 || nb == 0)
		answer = 1;
	else
		while (i <= nb)
		{
			answer = answer * i;
			i++;
		}
	return (answer);
}
