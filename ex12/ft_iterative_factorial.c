/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <frahaing@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 00:12:48 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/07 00:12:51 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int res;

	i = 1;
	res = 1;
	if (nb > 0)
	{
		while (i <= nb)
		{
			res = res * i;
			i++;
		}
		return (res);
	}
	if (nb == 0)
		return (1);
	return (0);
}
