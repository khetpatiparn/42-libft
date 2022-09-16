/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plakorn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:58:46 by plakorn           #+#    #+#             */
/*   Updated: 2022/09/15 21:58:47 by plakorn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	
	str = (unsigned char*)s;
	while (n--)
	*str++ = '\0';
}

int	main()
{
	const char a[] = "hola";
	ft_bzero(a,2);
	printf("%s\n", a);
}
  //a = /0/0la/0
*/
