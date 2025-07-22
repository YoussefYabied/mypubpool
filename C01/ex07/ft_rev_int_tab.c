/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:00:49 by yoabied           #+#    #+#             */
/*   Updated: 2025/07/21 10:24:16 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		swp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swp;
		i++;
	}
}
