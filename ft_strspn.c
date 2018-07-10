/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:53:56 by ksiziva           #+#    #+#             */
/*   Updated: 2018/07/10 14:41:23 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s1, const char *s2)
{
	int i;
	int j;
	size_t count;

	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

int main () {
   int len;
   int len2;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABCD";

   len = strspn(str1, str2);
   len2 = ft_strspn(str1, str2);

   printf("Length of initial segment matching %d\n", len );
	
   printf("Length of initial segment matching %d\n", len2 );
   return(0);
}
