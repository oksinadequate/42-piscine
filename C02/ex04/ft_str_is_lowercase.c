/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:56:50 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/07 14:11:36 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_lowercase(str[i++]))
		{
			return (0);
		}
	}
	return (1);
}
