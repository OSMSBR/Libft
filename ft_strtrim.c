/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:55:47 by osebbar           #+#    #+#             */
/*   Updated: 2024/01/02 11:26:19 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	char	*trimmed_str2;
	size_t	trimmed_len;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	trimmed_str = (char *)s1;
	while (*trimmed_str != '\0' && ft_strchr(set, *trimmed_str) != NULL)
	{
		trimmed_str++;
	}
	trimmed_str2 = trimmed_str + ft_strlen(trimmed_str) - 1;
	while (trimmed_str2 >= trimmed_str && ft_strchr(set, *trimmed_str2) != NULL)
	{
		trimmed_str2--;
	}
	trimmed_len = trimmed_str2 - trimmed_str + 1;
	result = (char *)malloc(trimmed_len + 1);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, trimmed_str, trimmed_len);
	result[trimmed_len] = '\0';
	return (result);
}
