/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 09:04:13 by ksiziva           #+#    #+#             */
/*   Updated: 2018/07/25 09:08:24 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		pgcd(int n, int n2)
{
	int i;

	i =  n  + 1;
	while (--i)
		if (!(n % i) && !(n2 % i))
			return (i);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%i", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
