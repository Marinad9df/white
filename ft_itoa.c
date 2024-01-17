/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:17:11 by marigon2          #+#    #+#             */
/*   Updated: 2024/01/17 17:12:47 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_nbr_len(int nb)
{
	int	len;

	len = 1;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nbr_len(n);
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (len > sign)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
