/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:28:42 by aziyani           #+#    #+#             */
/*   Updated: 2022/10/21 02:58:05 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	found(char const *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	if (!set || !s1)
		return (0);
	i = 0;
	while (found(set, s1[i]))
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (found(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, i, len - i));
}

static	int	found(char const *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main()
{
	printf("%s",ft_strtrim("///","/"));
}*/