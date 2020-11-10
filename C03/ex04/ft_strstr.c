/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:24:57 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/10 14:24:59 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *str2;
	char *to_find2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		str2 = str;
		to_find2 = to_find;
		while (*to_find2 && *str2 == *to_find2)
		{
			str2++;
			to_find2++;
		}
		if (*to_find2 == 0)
			return (str);
		str++;
	}
	return (0);
}
