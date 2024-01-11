/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:35:51 by osebbar           #+#    #+#             */
/*   Updated: 2023/12/31 20:46:08 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str;
	const unsigned char	*str2;
	size_t				i;

	str = dest;
	str2 = src;
	if (str == NULL && str2 == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dest);
}
