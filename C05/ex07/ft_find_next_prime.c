/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omalishe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:10:22 by omalishe          #+#    #+#             */
/*   Updated: 2020/11/12 17:20:06 by omalishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(unsigned int n, unsigned int b)
{
	if (n % b == 0)
		return (0);
	if (b * b > n)
		return (1);
	return (is_prime(n, b + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (is_prime((unsigned int)nb, 2));
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	int				not_found;

	i = (unsigned int)nb;
	not_found = 1;
	while (not_found)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
