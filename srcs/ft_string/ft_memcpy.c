/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 17:09:03 by nado-nas          #+#    #+#             */
/*   Updated: 2025/08/29 17:42:01 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return ((void *)pd);
}
