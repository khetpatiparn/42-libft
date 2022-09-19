/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plakorn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:30:16 by plakorn           #+#    #+#             */
/*   Updated: 2022/09/19 15:38:58 by plakorn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s!= '\0')
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*
char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
	 		return (char *)(ptr);
		ptr++;
	}
	return (NULL);
}
*/
