/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <mmonahan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:42:21 by mmonahan          #+#    #+#             */
/*   Updated: 2018/11/30 19:37:51 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 5

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

void	ft_display_file(char *av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(av, O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUF_SIZE);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
	}
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
