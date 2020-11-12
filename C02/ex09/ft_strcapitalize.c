/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:15:00 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/10 16:15:08 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		capitalize(char c)
{
	if (c < '0')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	else if ((c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr)
	{
		if (ptr == str)
		{
			if (*ptr <= 'z' && *ptr >= 'a')
				*ptr -= 32;
		}
		else if (capitalize(*(ptr - 1)) == 0)
		{
			if (*ptr <= 'z' && *ptr >= 'a')
				*ptr -= 32;
		}
		else if ((*ptr >= 'A') && (*ptr <= 'Z'))
		{
			*ptr += 32;
		}
		ptr++;
	}
	return (str);
}
