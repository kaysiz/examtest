/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:53:55 by ksiziva           #+#    #+#             */
/*   Updated: 2018/08/03 12:00:54 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int s, int e)
{
	int i;
	int len;
	int *tab;
	long int start;
	long int end;
	
	i = 0;
	start = (long int)s;
	end = (long int)e;
	len = end - start;
	if (len < 0)
		len = -len;
	len++;
	tab = (int *)malloc(sizeof(int) * len);
	if (end > start)
	{
		while (end >= start)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (end <= start)
		{
			tab[i] = end;
			end++;	
			i++;
		}
	}
	return (tab);
}
