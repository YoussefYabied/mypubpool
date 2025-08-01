/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:28:53 by yoabied           #+#    #+#             */
/*   Updated: 2025/07/17 22:36:31 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	nb[2];

	if (n > 0 && n < 10)
	{
		nb[0] = '0';
		while (nb[0] <= '8')
		{
			nb[1] = nb[0] + 1;
			while (nb[1] <= '9')
			{
				write(1, &nb[0], 1);
				write(1, &nb[1], 1);
				if (!(nb[0] == '8' && nb[1] == '9'))
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				nb[1]++;
			}
			nb[0]++;
		}
	}
}
