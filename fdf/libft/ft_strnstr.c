/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojyang <seojyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:09:54 by seojyang          #+#    #+#             */
/*   Updated: 2022/11/13 19:28:07 by seojyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	idx;
	size_t	needle_len;
	size_t	find_idx;

	idx = 0;
	find_idx = 0;
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *) haystack);
	while (haystack[idx] && idx + needle_len <= n)
	{
		if (!ft_strncmp(haystack + idx, needle, needle_len))
			return ((char *) haystack + idx);
		idx++;
	}
	return (0);
}
