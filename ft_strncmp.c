/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndillon <ndillon@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:38:06 by ndillon           #+#    #+#             */
/*   Updated: 2021/10/12 00:38:06 by ndillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	res;

	if (!s1 || !s2)
		return (0);
	while (*s1 == *s2 && --n && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	res = (unsigned char)*s1 - (unsigned char)*s2;
	return (res);
}
