/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:12:31 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/09 16:13:19 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_printable(char a)
{
	if (a >= ' ' && a <= '~')
	{
		return (1);
	}
	return (0);
}

void	write_b(unsigned char b)
{
	b = b + 48;
	if (b > 57)
		b = b + 39;
	write(1, &b, 1);
}

void	print(unsigned char b)
{
	write(1, "\\", 1);
	write_b((int)b / 16);
	write_b((int)b % 16);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!is_printable(*str))
			print(*str);
		else
			write(1, str, 1);
		str++;
	}
}
