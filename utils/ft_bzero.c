/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stone <stone@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 16:02:17 by sdummett          #+#    #+#             */
/*   Updated: 2021/08/12 16:18:58 by stone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_bzero(void *b, size_t len)
{
	while (len)
	{
		*(unsigned char *)b = 0;
		b++;
		len--;
	}
}
