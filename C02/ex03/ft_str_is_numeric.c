/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:53:38 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/09 18:59:39 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char a)
{
	if (a > 0 && a < 9)
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_numeric(str[i++]))
		{
			return (0);
		}
	}
	return (1);
}
