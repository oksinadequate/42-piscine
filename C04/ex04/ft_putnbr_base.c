/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:09:22 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/12 16:23:50 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	check_error(char *check)
{
	char	*check2;
	int		abc;

	check2 = check;
	if (*check == 0 || *(check + 1) == 0)
		return (0);
	while (*check2)
	{
		if (*check2 == '-' || *check2 == '+' || *check2 <= 31)
			return (0);
		abc = 1;
		while (*(check2 + abc))
		{
			if (*(check2 + abc) == *check2)
				return (0);
			abc++;
		}
		check2++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != 0)
	{
		str++;
		a++;
	}
	return (a);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int len;
	unsigned int nbr_unsigned;

	if (check_error(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr_unsigned = (unsigned int)(-1 * nbr);
		}
		else
		{
			nbr_unsigned = (unsigned int)nbr;
			len = ft_strlen(base);
		}
		if (nbr_unsigned >= len)
		{
			ft_putnbr_base(nbr_unsigned / len, base);
			ft_putnbr_base(nbr_unsigned % len, base);
		}
		else
			write(1, base + nbr_unsigned, 1);
	}
}
