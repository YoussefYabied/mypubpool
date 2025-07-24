/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:51:06 by yoabied           #+#    #+#             */
/*   Updated: 2025/07/20 19:02:06 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	valsrunning(int x, int y, int h, int v)
{
	if ((v == 1 && h == 1) || (h == 1 && v == y))
		ft_putchar('A');
	else if ((v == 1 && h == x) || (v == y && h == x))
		ft_putchar('C');
	else if ((v == 1 || v == y) || (h == 1 || h == x))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	h;
	int	v;

	if (x <= 0 || y <= 0)
		return ;
	else
	{
		v = 1;
		while (v <= y)
		{
			h = 1;
			while (h <= x)
			{
				valsrunning(x, y, h, v);
				h++;
			}
			write(1, "\n", 1);
			v++;
		}
	}
}
