/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndillon <ndillon@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:38:17 by ndillon           #+#    #+#             */
/*   Updated: 2021/10/12 00:38:17 by ndillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	ptr = NULL;
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	return (ptr);
}
