/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:44:01 by noavetis          #+#    #+#             */
/*   Updated: 2025/01/18 21:32:37 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	if ((count != 0 && size >= 2147483647)
		|| (size != 0 && count >= 2147483647))
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(1));
	len = count * size;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
