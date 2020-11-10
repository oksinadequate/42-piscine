/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:49:51 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/10 13:52:04 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	char	*dest2;
	char	*src2;

	dest2 = dest;
	src2 = src;
	i = 0;
	while (*dest2)
	{
		dest2++;
	}
	while (*src2 && i < nb)
	{
		*dest2 = *src2;
		src2++;
		dest2++;
		i++;
	}
	*dest2 = 0;
	return (dest);
}
