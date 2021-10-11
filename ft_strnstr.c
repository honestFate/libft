/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndillon <ndillon@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:38:10 by ndillon           #+#    #+#             */
/*   Updated: 2021/10/12 00:38:10 by ndillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*ptr;

	if (!haystack || !needle)
		return (NULL);
	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = 0;
	while (*haystack && len--)
	{
		if (*haystack == needle[i])
		{
			if (i == 0)
				ptr = (char *)haystack;
			if (!needle[++i])
				return (ptr);
		}
		else
			i = 0;
		++haystack;
	}
	return (NULL);
}
