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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = 0;
	s_len = 0;
	while (dest[d_len] != '\0' && d_len < size)
		d_len++;
	while (src[s_len])
		s_len++;
	if (d_len == size)
		return (size + s_len);
	i = 0;
	while (src[i] && (d_len + i + 1) < size)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	if (d_len + i < size)
		dest[d_len + i] = '\0';
	return (d_len + s_len);
}
