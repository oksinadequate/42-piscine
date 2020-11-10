/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:59:01 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/07 14:11:10 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_uppercase(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_uppercase(str[i++]))
		{
			return (0);
		}
	}
	return (1);
}
