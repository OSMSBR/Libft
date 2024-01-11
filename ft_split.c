/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 20:39:10 by osebbar           #+#    #+#             */
/*   Updated: 2023/12/30 16:54:22 by osebbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_occ(char *str, char delimiter)
{
	int	wordcount;
	int	inword;

	wordcount = 0;
	inword = 0;
	while (*str)
	{
		if (*str == delimiter)
		{
			inword = 0;
		}
		else
		{
			if (!inword)
			{
				wordcount++;
				inword = 1;
			}
		}
		str++;
	}
	return (wordcount);
}

static int	my_free(char **result, int i, int j)
{
	if (!result[i])
	{
		while (j < i)
		{
			free(result[j]);
			j++;
		}
		free(result);
		return (1);
	}
	return (0);
}

static char	*ft_fill(const char **s, char c)
{
	int		len;
	char	*new_str;

	while ((**s) == c)
	{
		(*s)++;
	}
	len = 0;
	while ((*s)[len] != c && (*s)[len] != '\0')
		len++;
	new_str = ft_substr(*s, 0, len);
	return (new_str);
}

static char	**split_helper(const char *s, char c, int count)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < count)
	{
		result[i] = ft_fill(&s, c);
		if (my_free(result, i, j))
			return (NULL);
		s += ft_strlen(result[i]);
		i++;
	}
	result[count] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	int	count;

	if (!s)
		return (NULL);
	count = ft_occ((char *)s, c);
	return (split_helper(s, c, count));
}
