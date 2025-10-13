/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zozcan <zozcan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:50:04 by zozcan            #+#    #+#             */
/*   Updated: 2025/10/13 11:09:00 by zozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	c;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	f = 1;
	c = 1;
	while (c <= nb)
	{
		f *= c;
		c++;
	}
	return (f);
}
