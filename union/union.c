/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 08:43:01 by ksiziva           #+#    #+#             */
/*   Updated: 2018/07/25 09:01:07 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_has_char(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *str, char *united, int *pos)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_has_char(united, str[i]) == 0)
		{
			write(1, &str[i], 1);
			united[*pos] = str[i];
			(*pos)++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int pos;
	char str[1024];

	if (ac == 3)
	{
		pos = 0;
		ft_union(av[1], str, &pos);
		ft_union(av[2], str, &pos);	
	}
	write(1, "\n", 1);
	return (0);
}
