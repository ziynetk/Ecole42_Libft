/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkusasla <zkusasla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:41:32 by zkusasla          #+#    #+#             */
/*   Updated: 2022/07/06 02:56:17 by zkusasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dstt;
	const char		*srcc;
	unsigned int	i;

	i = 0;
	dstt = (char *)dst;
	srcc = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return (dst);
}
