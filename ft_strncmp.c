/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:53 by osebbar           #+#    #+#             */
/*   Updated: 2023/12/31 23:17:08 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n
		&& ((unsigned char)str1[i] != '\0' || (unsigned char)str2[i] != '\0'))
	{
		if (((unsigned char)str1[i] - (unsigned char)str2[i]) < 0)
		{
			return (((unsigned char)str1[i] - (unsigned char)str2[i]));
		}
		else if (((unsigned char)str1[i] - (unsigned char)str2[i]) > 0)
		{
			return (((unsigned char)str1[i] - (unsigned char)str2[i]));
		}
		i++;
	}
	return (0);
}
