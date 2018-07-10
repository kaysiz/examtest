/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 10:05:51 by ksiziva           #+#    #+#             */
/*   Updated: 2018/07/10 11:32:17 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int neg_flag;
	int result;
	int i;
	
	i = 0;
	neg_flag = 0;
	while (str[i])
	{
		result *= 10;
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				neg_flag = 1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		{
			result += str[i] - '0';
			i++;
		}
	}
	if (neg_flag)
		return (result * -1);
	return (result);
}
