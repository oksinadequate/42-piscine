/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:49:51 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/10 16:27:30 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest2;
	char			*src2;
	unsigned int	i;

	i = 0;
	dest2 = dest;
	src2 = src;
	while (*dest2)
	{
		dest2++;
	}
	while (i < nb && *src2)
	{
		*dest2 = *src2;
		src2++;
		dest2++;
		i++;
	}
	*dest2 = 0;
	return (dest);
}
