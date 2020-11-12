/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:35:28 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/12 16:17:06 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (*str != 0)
	{
		a++;
		str++;
	}
	return (a);
}

char	*is_in_base(char *base, char *to_find)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);
}

int		check_error(char *check)
{
	char	*check2;
	int		abc;

	check2 = check;
	if (*check == 0 || *(check + 1) == 0)
		return (0);
	while (*check2)
	{
		if (*check2 == '+' || *check2 == '-' || *check2 == ' ' || *check2 <= 31)
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

int		ft_atoi_base(char *str, char *base)
{
	unsigned int	num;
	int				sig;
	char			*str2;

	num = 0;
	sig = 1;
	if (check_error(base))
	{
		str2 = str;
		while (*str2 == ' ' || (*str2 >= 9 && *str2 <= 13))
			str2++;
		while (*str2 == '-' || *str2 == '+')
		{
			if (*str2 == '-')
				sig = sig * -1;
			str2++;
		}
		while (is_in_base(base, str2))
		{
			num *= ft_strlen(base);
			num += (unsigned int)(is_in_base(base, str2) - base);
			str2++;
		}
	}
	return (int)(num * sig);
}
