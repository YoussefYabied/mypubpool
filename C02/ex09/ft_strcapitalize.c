/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:24:09 by yoabied           #+#    #+#             */
/*   Updated: 2025/07/26 10:03:06 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	ft_strlowcase(str);
	while (str[x])
	{
		if ((x == 0) 
			|| !((str[x - 1] >= 'a' && str[x - 1] <= 'z') 
				|| (str[x - 1] >= 'A' && str[x - 1] <= 'Z') 
				|| (str[x - 1] >= '0' && str[x - 1] <= '9')))
		{
			if (str[x] >= 'a' && str[x] <= 'z')
			{
				str[x] -= 32 ;
			}
		}
		x++;
	}
	return (str);
}
