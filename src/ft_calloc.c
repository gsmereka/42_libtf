/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 00:44:08 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/23 23:30:32 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	real_size;

	real_size = nmemb * size;
	if (real_size == 0 || real_size / size != nmemb)
		return (NULL);
	p = malloc(real_size);
	if (!p)
		return (NULL);
	ft_bzero(p, real_size);
	return (p);
}
