/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:04:18 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/07 14:15:23 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_printable(char a)
{
	if (a >= ' ' && a <= '~')
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_printable(str[i++]))
		{
			return (0);
		}
	}
	return (1);
}
