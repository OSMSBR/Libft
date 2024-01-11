/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:56:07 by osebbar           #+#    #+#             */
/*   Updated: 2023/12/30 16:10:29 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_overlap(char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		str1[i - 1] = str2[i - 1];
		i--;
	}
	return (str1);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;
	size_t		i;

	str1 = dest;
	str2 = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
		str1 = ft_overlap(str1, str2, n);
	else
	{
		i = 0;
		while (i < n)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (dest);
}
