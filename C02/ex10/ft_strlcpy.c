/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:14:56 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/09 15:17:38 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		n;
	char	*a;

	a = src;
	n = size;
	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*dest++ = *src++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*dest = '\0';
		while (*src++)
			;
	}
	return (src - a - 1);
}
