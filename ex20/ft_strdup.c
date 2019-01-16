/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 05:37:45 by mmonahan          #+#    #+#             */
/*   Updated: 2018/11/24 06:03:50 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp != '\0')
		tmp++;
	return (tmp - str);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		strlen;
	char	*tmp;

	i = 0;
	strlen = ft_strlen(src);
	tmp = (char*)malloc(sizeof(*tmp) * (strlen + 1));
	while (i < strlen)
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
