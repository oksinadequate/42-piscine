/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:44:59 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/07 14:12:07 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_alpha(str[i++]))
		{
			return (0);
		}
	}
	return (1);
}
