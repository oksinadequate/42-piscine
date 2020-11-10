/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:06:38 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/09 18:55:36 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		capitalize(char a)
{
	if (a < '0')
		return (0);
	if (a > '9' && a < 'A')
		return (0);
	if ((a > 'Z' && a < 'a') || (a > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	while (str[i])
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (capitalize(str[i - 1]) == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
