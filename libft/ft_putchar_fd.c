/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:15:15 by aziyani           #+#    #+#             */
/*   Updated: 2022/10/21 02:46:37 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
//     // char c = 'c';	
//     int file_id;
//     file_id = open("tst.txt" , O_CREAT | O_RDWR);
//     ft_putchar_fd('c', fd);
//     // printf("%d", fd);
// }