/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:54:44 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/12 16:19:25 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		num;
	int		sig;
	char	*str2;

	num = 0;
	sig = 1;
	str2 = str;
	while (*str2 == ' ' || (*str2 >= 9 && *str2 <= 13))
		str2++;
	while (*str2 == '-' || *str2 == '+')
	{
		if (*str2 == '-')
			sig = sig * -1;
		str2++;
	}
	while (*str2 >= '0' && *str2 <= '9')
	{
		num = num * 10;
		num = num + (int)(*str2 - '0');
		str2++;
	}
	return (num * sig);
}
