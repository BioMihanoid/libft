/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmilan <gmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:51:22 by gmilan            #+#    #+#             */
/*   Updated: 2021/10/10 16:41:51 by gmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	count_words(char const *str, char c)
{
	int	count;
	int	f;

	count = 0;
	f = 0;
	while (*str)
	{
		if (*str != c && f == 0)
		{
			f = 1;
			count++;
		}
		else if (*str == c)
			f = 0;
		str++;
	}
	return (count);
}

static char	*create_str(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, i + 1);
	return (str);
}

static void	clear(char **arr_str, int i)
{
	while (i > 0)
		free(arr_str[i--]);
	free(arr_str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	**arr_str;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	arr_str = (char **)malloc(sizeof(char *) * (len + 1));
	if (!arr_str)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (s[0] == c)
			s++;
		arr_str[i] = create_str(s, c);
		if (!arr_str)
		{
			clear(arr_str, i);
			return (NULL);
		}
		s = s + ft_strlen(arr_str[i]);
	}
	arr_str[i] = 0;
	return (arr_str);
}
