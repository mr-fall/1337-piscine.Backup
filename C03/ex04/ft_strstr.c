/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vegas <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:18:07 by Vegas           #+#    #+#               */
/*   Updated: 2025/07/21 16:05:57 by Vegas          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!str || !to_find)
		return (NULL);
	if (!to_find[0])
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] && str[i + j] == to_find[j])
				j++;
			if (!to_find[j])
				return (&str[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
