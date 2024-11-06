/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torsini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:33:29 by torsini           #+#    #+#             */
/*   Updated: 2024/02/28 17:34:14 by torsini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sgn;

	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	sgn = 1;
	if (*str == '-' || *str == '+')
		sgn = 44 - *str++;
	while (ft_isdigit(*str))
		i = (i * 10) + (*str++ - '0');
	return (i * sgn);
}
