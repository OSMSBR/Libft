/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:51:46 by osebbar           #+#    #+#             */
/*   Updated: 2023/12/29 11:37:45 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	str1 = ptr1;
	str2 = ptr2;
	i = 0;
	while (i < n)
	{
		if (((unsigned char)str1[i] - (unsigned char)str2[i]) < 0)
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		else if (((unsigned char)str1[i] - (unsigned char)str2[i]) > 0)
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}
