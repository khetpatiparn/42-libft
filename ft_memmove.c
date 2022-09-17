/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plakorn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:02:06 by plakorn           #+#    #+#             */
/*   Updated: 2022/09/17 11:02:07 by plakorn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*buffer;

	i = 0;
	while (i < n)
	{
		*(buffer + i) = *(unsigned char *)(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(buffer + i);
		i++;
	}
	return (dest);
}

int	main()
{
	char	str1[] = "memmove can be very useful......";
	ft_memmove(str1+20, str1+15, 11);
	printf("%s\n", str1);
}
*/
