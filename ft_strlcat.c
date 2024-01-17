/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:13:37 by marigon2          #+#    #+#             */
/*   Updated: 2024/01/17 15:32:05 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_index;

	dst_index = 0;
	while (dst[dst_index] != '\0' && dst_index < size)
		dst_index++;
	index = dst_index;
	while (src[dst_index - index] && dst_index + 1 < size)
	{
		dst[dst_index] = src[dst_index - index];
		dst_index++;
	}
	if (index < size)
		dst[dst_index] = '\0';
	return (index + ft_strlen(src));
}
