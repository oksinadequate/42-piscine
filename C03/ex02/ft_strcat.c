/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:19:09 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/10 13:19:16 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *dest2;
	char *src2;

	dest2 = dest;
	src2 = src;
	while (*dest2)
	{
		dest2++;
	}
	while (*src2)
	{
		*dest2 = *src2;
		src2++;
		dest2++;
	}
	*dest2 = 0;
	return (dest);
}
