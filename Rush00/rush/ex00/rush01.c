/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:40:35 by yoabied           #+#    #+#             */
/*   Updated: 2025/07/20 19:31:59 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	valsrunning(int x, int y, int h, int v)
{
	if ((v == 1 && h == 1) || (v == y && h == x && x != 1 && y != 1)) 
		ft_putchar('/');
	else if ((v == 1 && h == x) || (v == y && h == 1))
		ft_putchar('\\');
	else if ((v == y && h == x) || (x == 1 && y == 1))
		ft_putchar('\\');
	else if ((h == 1 || h == x) || (v == 1 || v == y)) 
		ft_putchar('*');
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
