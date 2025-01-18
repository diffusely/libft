/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 19:27:08 by noavetis          #+#    #+#             */
/*   Updated: 2025/01/18 21:40:34 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	start_check(char const **s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				s1++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
}

static void	end_check(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = ft_strlen(s1);
	i = 0;
	while (s1[size - i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[size - i] == set[j])
			{
				
				break ;
			}
			j++;
		}
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	size;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	start_check(&s1, set);
	
	ptr = ft_strdup(s1);
	return (ptr);
}
