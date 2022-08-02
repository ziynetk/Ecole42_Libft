/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkusasla <zkusasla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:56:44 by zkusasla          #+#    #+#             */
/*   Updated: 2022/07/05 03:31:47 by zkusasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dizi;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	dizi = (char *)malloc(sizeof(char) * (len + 1));
	if (!dizi)
		return (NULL);
	i = 0;
	while (len--)
		dizi[i++] = s[start++];
	dizi[i] = '\0';
	return (dizi);
}
