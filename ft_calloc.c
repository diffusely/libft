/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:44:01 by noavetis          #+#    #+#             */
/*   Updated: 2025/01/13 21:55:56 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	len;
	char	*ptr;
	
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
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
	return (ptr);
}

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
// 	size_t temp;
// 	size_t count = 6;
// 	size_t size = SIZE_MAX;
	
// 	// int	* ptr = calloc(count, size);
// 	// if (!ptr)
// 	// 	printf("BAD");
// 	// for(int i = 0; i < count; i++)
// 	// {
// 	// 	printf("%d ", ptr[i]);
// 	// }
// 	size_t *ptr = malloc(SIZE_MAX / 200000);
	
// 	if (!ptr)
// 	 	printf("BAD");
// }