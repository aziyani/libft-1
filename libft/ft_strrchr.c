/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:08:31 by aziyani           #+#    #+#             */
/*   Updated: 2022/10/20 23:47:49 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *) &s[len]);
		len --;
	}
	return (NULL);
}

// int main()
// {
//     char b[] = "mohamed";
//     char *ptr = ft_strrchr(b,'m');
//     // char *ptr = strrchr(b,'m');
//     printf ("%s", ptr);
//     return 0;
// }