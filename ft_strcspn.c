/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:40:00 by ksiziva           #+#    #+#             */
/*   Updated: 2018/07/10 14:42:54 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
                return (i);
            else
                j++;
        }
        i++;
    }
    return (i);
}

int main () {
   int len;
   int len2;
   const char str1[] = "ABCDEF4960910";
   const char str2[] = "013";

   len = strcspn(str1, str2);
   len2 = ft_strcspn(str1, str2);

   printf("Length of initial segment matching %d\n", len );

   printf("Length of initial segment matching %d\n", len2 );
   return(0);
}
