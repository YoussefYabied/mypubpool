/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:19:24 by yoabied           #+#    #+#             */
/*   Updated: 2025/07/27 18:42:10 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srcsize;
	unsigned int	isl;
	unsigned int	destsize;
	unsigned int	i; 

	i = 0;
	isl = ft_strlen(src);
	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (size < dest)
	{
		return (srcsize + size);
	}
	while (src[i] != '\0' && i < size - 1 - destsize)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (destsize + isl);
}
