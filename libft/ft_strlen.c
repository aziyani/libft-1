/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:19:17 by aziyani           #+#    #+#             */
/*   Updated: 2022/10/14 16:36:00 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "hello";
	printf ("%zu\n", ft_strlen(s));
	printf ("%zu", ft_strlen(s));
}*/