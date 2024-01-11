/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:21:39 by osebbar           #+#    #+#             */
/*   Updated: 2024/01/02 11:06:10 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendest;
	size_t	lensrc;

	i = 0;
	if (size == 0 || size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	j = ft_strlen(dest);
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	while (src[i] != '\0' && i < size - lendest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lendest + lensrc);
}
