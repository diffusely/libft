/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 21:18:12 by noavetis          #+#    #+#             */
/*   Updated: 2025/01/12 20:35:34 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		next;
	unsigned char		prev;
	size_t				i;

	i = 0;
	prev = *(char *)(src + i);
	if (len == 0)
		return (dst);
	while (i < len - 1)
	{
		next = *(char *)(src + i + 1);
		*(char *)(dst + i) = prev;
		i++;
		prev = next;
	}
	*(char *)(dst + i) = prev;
	return (dst);
}
