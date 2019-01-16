/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonahan <mmonahan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:57:42 by mmonahan          #+#    #+#             */
/*   Updated: 2018/11/29 20:17:34 by mmonahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_point.h"

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
		ft_putchar(a++);
}

void	ft_print_numbers(void)
{
	int number;

	number = '0';
	while (number <= '9')
		ft_putchar(number++);
}

void ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

void ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

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

int ft_sqrt(int nb)
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

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	char *tmp;

	tmp = str;
	while(*tmp != '\0')
		tmp++;
	return (tmp - str);
}

int 	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort_ascii(int nb, char **val)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < nb - 1)
	{
		j = 0;
		while (val[i][j] == val[i + 1][j])
			j++;
		if (val[i][j] > val[i + 1][j])
		{
			tmp = val[i];
			val[i] = val[i + 1];
			val[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}

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

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length) {
		f(tab[i]);
		i++;
	}
}

int		ft_search_a(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == 'x')
			i++;
		k++;
	}
	return (k);
}

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (tab[i])
	{
			if (f(tab[i]) == 1)
				k++;
			i++;
	}
	return (k);
}

int 	main(int argc, char **argv)
{
	ft_print_alphabet();
	printf("\n");

	ft_print_numbers();
	printf("\n");

	ft_is_negative(-2);
	printf("\n");
	ft_is_negative(0);
	printf("\n");
	ft_is_negative(2);
	printf("\n");

	int n;
	n = 12;
	printf("%d", n);
	ft_ft(&n);
	printf("%d", n);

	int a;
	int b;
	a = 5;
	b = 3;
	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	int di;
	int mo;
	ft_div_mod(a, b, &di, &mo);
	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, di, mo);

	a = 13;
	b = -2;
	while (b <= a)
	{
		printf("%d! = %d\n", b, ft_recursive_factorial(b));
		b++;
	}

	int racional;
	racional = 9;
	printf("^%d = %d\n", racional, ft_sqrt(racional));

	ft_putstr("asdf\n");

	printf("asdfgzxcvb = %d\n", ft_strlen("asdfgzxcvb"));

	printf("a vs aa %d\n", ft_strcmp("a", "aa"));
	printf("ab vs aa %d\n", ft_strcmp("ab", "aa"));
	printf("aa vs aa %d\n", ft_strcmp("aa", "aa"));
	printf("aa vs ab %d\n", ft_strcmp("aa", "ab"));
	printf("aa vs a %d\n", ft_strcmp("aa", "a"));

	int i;
	int j;
	i = 1;
	j = 0;
	sort_ascii(argc, argv);
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}

	int *temp;
	temp = ft_range(3, 5);
	i = 0;
	while (temp[i])
	{
		printf("%d\n", temp[i]);
		i++;
	}

	t_point point;
	set_point(&point);
	printf("point->x = %d, point->y = %d\n", point.x, point.y);

	int tab[] = {1, 2,  3, 4, 5, 6, 7, 8 , 9};
	ft_foreach(tab, 5, &ft_putnbr);
	printf("\n");

	char **str;
	str[0] = (char *)malloc(5);
	str[1] = (char *)malloc(5);
	str[0] = "qwer";
	str[1] = "zxxv";
	int d = ft_count_if(str, &ft_search_a);
	printf("%d\n", d);

	return (0);
}
