/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkusasla <zkusasla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:45:25 by zkusasla          #+#    #+#             */
/*   Updated: 2022/07/04 22:45:26 by zkusasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbayt, size_t size)
{
	void	*str;

	str = malloc(size * nbayt);
	if (!str)
		return (str);
	return (ft_memset(str, 0, size * nbayt));
}
