/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:15:50 by osebbar           #+#    #+#             */
/*   Updated: 2024/01/02 13:24:30 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*small == '\0')
	{
		return ((char *)big);
	}
	while (i < n && big[i] != '\0')
	{
		if (big[i] == small[0])
		{
			j = 0;
			while (small[j] != '\0' && big[i + j] == small[j] && (i + j) < n)
			{
				j++;
			}
			if (small[j] == '\0')
			{
				return ((char *)(big + i));
			}
		}
		i++;
	}
	return (NULL);
}
