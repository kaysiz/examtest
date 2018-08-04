/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:30:30 by ksiziva           #+#    #+#             */
/*   Updated: 2018/08/03 11:47:29 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int i;
	int j;
	int index;

	i = 0;
	j = 0;
	index = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
		{
			index++;
			i++;
		}
		j++;
	}
	i = 0;
	if (s1[index] == '\0')
	{
		while(s1[i])
		{
			write(1, &s1[i], 1);
			i++;
		}
	}
}

int main (int ac, char **av)
{
	if (ac == 3)
	{
		wdmatch(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
