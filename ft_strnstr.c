/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:02:56 by marigon2          #+#    #+#             */
/*   Updated: 2024/01/17 13:57:06 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;

	if (*needle == '\0')
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle)
			if (ft_strncmp(haystack + i, needle, n_len) == 0
				&& (i + n_len) <= len)
				return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
