/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 14:47:45 by yoabied           #+#    #+#             */
/*   Updated: 2025/07/27 15:46:23 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void    ft_putnbr_base(int nbr, char *base)
{
	unsigned int len;
	char	dig;
	unsigned long nb;

	nb = (unsigned long)nbr;
	len = (unsigned long)ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = -nbr;
	}
	if (nb >= len)
	{
		ft_putnbr_base((nb / len), base);
	}
	dig = (base[nb % len]);
	write(1, &dig, 1);
}
/*
int main()
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	return 0;
}*/