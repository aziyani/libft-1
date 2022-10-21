/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:09:19 by aziyani           #+#    #+#             */
/*   Updated: 2022/10/14 16:13:25 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*#include <stdio.h>
#include <ctype.h>

int main()
{
	printf ("%d\n", ft_isdigit('9'));
	printf ("%d", ft_isdigit('9'));
}*/
