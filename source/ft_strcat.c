/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroselin <kroselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:10:15 by kroselin          #+#    #+#             */
/*   Updated: 2019/09/13 10:04:09 by kroselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*dst;
	int		l1;
	int		l2;

	l1 = 0;
	l2 = 0;
	dst = s1;
	while (s1[l2] != '\0')
	{
		dst[l1] = s1[l2];
		l2++;
		l1++;
	}
	l2 = 0;
	while (s2[l2] != '\0')
	{
		dst[l1] = s2[l2];
		l2++;
		l1++;
	}
	dst[l1] = '\0';
	return (dst);
}