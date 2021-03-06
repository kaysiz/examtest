/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:20:43 by angavrel          #+#    #+#             */
/*   Updated: 2017/02/27 11:30:33 by angavrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1] == ' ' || *av[1] == '\t'))
			++av[1];
		while (*av[1] != '\0' && (*av[1] != ' ' && *av[1] != '\t'))
			ft_putchar(*av[1]++);
	}
	ft_putchar('\n');
	return (0);
}
