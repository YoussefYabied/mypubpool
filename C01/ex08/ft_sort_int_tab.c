/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:17:48 by yoabied           #+#    #+#             */
/*   Updated: 2025/07/22 09:30:30 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	pip;

	pip = *a;
	*a = *b;
	*b = pip;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
