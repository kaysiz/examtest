/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 12:04:49 by ksiziva           #+#    #+#             */
/*   Updated: 2018/08/03 13:33:36 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void rm_tab(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] == '\t')
			s[i] = ' ';
		i++;
	}
}
void space(char *str)
{
	int i = 0;
	while (str[i] == ' ' && str[i])
	{
		str[i] = '$';
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] == ' ' )
		   str[i] = '$';	
		i++;
	}
}

int main (int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	if(ac >= 2)
	{
		rm_tab(av[1]);
		space(av[1]);
		while(av[1][len])
			len++;
		while (av[1][i] && av[1][i] != ' ')
			i++;
		j = i;
		while (av[1][i])
		{
			if (av[1][i] != '$')
			{
				write(1, &av[1][i], 1);
				k = 1;
			}
			i++;
		}
		if (av[1][i] == '\0' && av[1][i - 1] != ' ')
			write(1, " ", 1);
		i = 0;
		while (i < j)
		{
			if (av[1][i] != '$')
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
