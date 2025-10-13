/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zozcan <zozcan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:40:28 by zozcan            #+#    #+#             */
/*   Updated: 2025/10/12 17:03:31 by zozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while ((*str == ' ') || (*str <= 13 && *str >= 9))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1 * sign;
		}
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * sign);
}
