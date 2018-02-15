/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:27:49 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/07 13:27:51 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int*)malloc(sizeof(int) * diff);
	while (min < max)
	{
		tab[i++] = min++;
	}
	return (tab);
}
